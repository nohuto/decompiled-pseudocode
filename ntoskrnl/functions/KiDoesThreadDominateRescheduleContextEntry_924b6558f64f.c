char __fastcall KiDoesThreadDominateRescheduleContextEntry(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // r10
  char v6; // r11
  unsigned __int8 v8; // r8
  char v9; // dl
  char v10; // r9
  __int64 v11; // rax
  char v13; // al
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0LL;
  v6 = a3;
  v14 = 0LL;
  if ( KiGroupSchedulingEnabled )
  {
    v13 = KiEvaluateGroupSchedulingPreemption(a1, a2, a3, &v14);
    v4 = v14;
    v9 = v13;
    goto LABEL_4;
  }
  v8 = *(_BYTE *)(a1 + 32);
  v9 = 1;
  if ( (v8 & 1) == 0 )
  {
    v10 = *(_BYTE *)(a2 + 195);
    v11 = *(_QWORD *)(a1 + 16);
    if ( v10 <= *(char *)(v11 + 195) )
    {
      if ( v10 == *(_BYTE *)(v11 + 195) )
      {
        if ( (((v6 & 1) == 0) & (unsigned __int8)~(v8 >> 3)) == 0 || (v8 & 0x10) != 0 )
          goto LABEL_4;
      }
      else if ( (v8 & 0x10) != 0 && v10 )
      {
        goto LABEL_4;
      }
      v9 = 0;
    }
  }
LABEL_4:
  if ( a4 )
    *a4 = v4;
  return v9;
}
