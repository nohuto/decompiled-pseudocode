__int64 __fastcall MiDpcGangTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  int GangAssignment; // r14d
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned int v9; // eax
  __int64 v10; // rcx
  signed __int32 v11; // ecx
  unsigned int v12; // esi
  __int64 result; // rax
  unsigned int v14; // ebx
  int i; // [rsp+20h] [rbp-28h] BYREF
  ULONG_PTR *v16[4]; // [rsp+28h] [rbp-20h] BYREF
  int v17; // [rsp+58h] [rbp+10h] BYREF

  v16[0] = 0LL;
  GangAssignment = 0;
  if ( KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] == *(_DWORD *)(a2 + 192) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = 0;
    v10 = *(_QWORD *)(a2 + 224);
    if ( *(_WORD *)(a2 + 208) )
    {
      while ( CurrentPrcb->Group != *(_WORD *)(v10 + 8) )
      {
        ++v9;
        v10 += 16LL;
        if ( v9 >= *(unsigned __int16 *)(a2 + 208) )
          goto LABEL_8;
      }
      if ( (CurrentPrcb->GroupSetMember & *(_QWORD *)v10) != 0 )
        GangAssignment = MiGetGangAssignment(a2, v16);
    }
  }
LABEL_8:
  if ( (*(_DWORD *)(a2 + 184) & 2) != 0 )
  {
    v11 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v12 = ~v11 & 0x80000000;
    if ( (v11 & 0x7FFFFFFF) != 0 )
    {
      v17 = 0;
      while ( (*(_DWORD *)a4 & 0x80000000) != v12 )
        KeYieldProcessorEx(&v17);
    }
    else
    {
      *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v12;
    }
  }
  if ( GangAssignment )
    MiDoGangAssignment(a2, v16);
  result = *(unsigned int *)(a2 + 184);
  if ( (result & 2) != 0 )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
    v14 = ~(_DWORD)result & 0x80000000;
    if ( (result & 0x7FFFFFFF) != 0 )
    {
      for ( i = 0; ; KeYieldProcessorEx(&i) )
      {
        result = *(_DWORD *)a4 & 0x80000000;
        if ( (_DWORD)result == v14 )
          break;
      }
    }
    else
    {
      *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v14;
    }
  }
  _InterlockedDecrement(a3);
  return result;
}
