__int64 __fastcall ProcessCompletionQueues(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r9
  char v6; // si
  __int64 v7; // r8
  _BOOL8 v8; // rbx
  __int64 v9; // r10
  __int64 v10; // rcx
  unsigned int i; // ebp
  __int64 v12; // r10
  __int64 v13; // r10
  signed __int32 v14[8]; // [rsp+0h] [rbp-38h] BYREF
  _BOOL8 v15; // [rsp+20h] [rbp-18h]
  int *v16; // [rsp+28h] [rbp-10h]
  int v17; // [rsp+40h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 32);
  if ( (result & 0x10) == 0 )
  {
    v5 = 1LL;
    if ( *(_BYTE *)(a1 + 20) || (_BYTE)a3 || (*(_DWORD *)(a1 + 116) & 1) != 0 )
    {
      v6 = 1;
      v8 = 0LL;
    }
    else
    {
      v6 = 0;
      v8 = (*(_DWORD *)(a1 + 64) & 0x4000) != 0;
    }
    if ( a2 == 0xFFFF || *(_WORD *)(a1 + 280) <= 1u )
    {
      result = *(_QWORD *)(a1 + 480);
      if ( (*(_WORD *)(result + 16LL * *(unsigned __int16 *)(a1 + 650) + 14) & 1) != *(_WORD *)(a1 + 652) )
      {
        NVMeMaskInterrupt(a1, *(unsigned __int16 *)(a1 + 656), a3, 1LL);
        if ( v6 )
        {
          result = NVMeCompletionDpcRoutine((int)v9 + 24, a1, v9, 0LL);
        }
        else
        {
          v17 = 0;
          v16 = &v17;
          v15 = v8;
          result = StorPortNotification(4098LL, a1, v9 + 24);
        }
      }
      v10 = *(_QWORD *)(a1 + 880);
      for ( i = 0; v10; ++i )
      {
        result = *(unsigned __int16 *)(a1 + 338);
        if ( i >= (unsigned int)result )
          break;
        v12 = v10 + 392LL * i;
        result = *(_QWORD *)v12;
        if ( (*(_WORD *)(*(_QWORD *)v12 + 16LL * *(unsigned __int16 *)(v12 + 170) + 14) & 1) != *(_WORD *)(v12 + 172) )
        {
          NVMeMaskInterrupt(a1, *(unsigned __int16 *)(v12 + 176), a3, v5);
          if ( v6 )
          {
            result = NVMeCompletionDpcRoutine((int)v13 + 24, a1, v13, 0LL);
          }
          else
          {
            v17 = 0;
            v16 = &v17;
            v15 = v8;
            result = StorPortNotification(4098LL, a1, v13 + 24);
          }
        }
        v10 = *(_QWORD *)(a1 + 880);
      }
    }
    else
    {
      if ( a2 )
        v7 = 392LL * a2 + *(_QWORD *)(a1 + 880) - 392LL;
      else
        v7 = a1 + 480;
      if ( !*(_BYTE *)(a1 + 25) && (unsigned int)(*(_DWORD *)(a1 + 16) - 1) <= 1 )
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 184) + 12LL) = 1 << *(_BYTE *)(v7 + 176);
        _InterlockedOr(v14, 0);
        *(_BYTE *)(a1 + 25) = 1;
      }
      if ( v6 )
      {
        return NVMeCompletionDpcRoutine((int)v7 + 24, a1, v7, 0LL);
      }
      else
      {
        v17 = 0;
        v16 = &v17;
        v15 = v8;
        return StorPortNotification(4098LL, a1, v7 + 24);
      }
    }
  }
  return result;
}
