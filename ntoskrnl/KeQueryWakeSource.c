__int64 __fastcall KeQueryWakeSource(__int64 a1, _DWORD *a2, _BYTE *a3)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdx
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // r9
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  unsigned int v32; // [rsp+48h] [rbp+20h] BYREF

  v32 = 0;
  memset(a3, 0, 0x88uLL);
  result = ((__int64 (__fastcall *)(unsigned int *, _QWORD))off_140C01CF8[0])(&v32, 0LL);
  if ( (int)result >= 0 )
  {
    if ( ((v32 - 209) & 0xFFFFFFFD) != 0 )
    {
      *a2 = 128;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 15 )
          LODWORD(v9) = 0x8000;
        else
          v9 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
        SchedulerAssist[5] |= v9;
      }
      if ( v32 <= 0xFF && (_mm_lfence(), (v10 = KeGetCurrentPrcb()->InterruptObject[v32]) != 0LL) )
      {
        v11 = 0LL;
        v12 = v10;
        do
        {
          v13 = v10[4];
          if ( v13 || (v13 = v10[3]) != 0 )
            *(_QWORD *)&a3[8 * v11] = v13;
          v14 = v10[20];
          v15 = 0LL;
          if ( v14 )
            v15 = *(_QWORD *)(v14 + 480);
          *(_QWORD *)&a3[8 * v11 + 24] = v15;
          v11 = (unsigned int)(v11 + 1);
          v16 = v10[1];
          if ( !v16 )
            break;
          v10 = (_QWORD *)(v16 - 8);
          if ( v10 == v12 )
            break;
        }
        while ( (unsigned int)v11 < 3 );
      }
      else
      {
        *a2 = 2;
      }
      if ( KiIrqlFlags )
      {
        v17 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      return 0LL;
    }
    v22 = *(_DWORD *)a1;
    if ( *(int *)a1 > 7 )
    {
      v28 = v22 - 8;
      if ( !v28 )
      {
        *a2 = 6;
        return 0LL;
      }
      v29 = v28 - 1;
      if ( !v29 )
      {
        *a2 = 7;
        return 0LL;
      }
      v30 = v29 - 1;
      if ( !v30 )
      {
        *a2 = 9;
        return 0LL;
      }
      v31 = v30 - 1;
      if ( !v31 )
      {
        *a2 = 10;
        return 0LL;
      }
      if ( v31 == 1 )
      {
        *a2 = 11;
        return 0LL;
      }
    }
    else
    {
      if ( v22 == 7 )
      {
        *a3 = *(_BYTE *)(a1 + 4);
        a3[2] = *(_BYTE *)(a1 + 5);
        *a2 = 129;
        return 0LL;
      }
      v23 = v22 - 1;
      if ( !v23 )
        goto LABEL_42;
      v24 = v23 - 1;
      if ( !v24 )
        goto LABEL_42;
      v25 = v24 - 1;
      if ( !v25 )
        goto LABEL_42;
      v26 = v25 - 1;
      if ( !v26 )
      {
LABEL_41:
        *a2 = 5;
        return 0LL;
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
LABEL_42:
        *a2 = 8;
        return 0LL;
      }
      if ( v27 == 1 )
        goto LABEL_41;
    }
    *a2 = 1;
    return 0LL;
  }
  if ( (_DWORD)result != -1073741823 )
    return result;
  *a2 = 0;
  return 0LL;
}
