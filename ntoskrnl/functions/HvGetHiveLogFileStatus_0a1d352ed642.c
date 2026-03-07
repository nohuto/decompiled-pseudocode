char __fastcall HvGetHiveLogFileStatus(__int64 a1, unsigned int a2, int *a3)
{
  unsigned __int64 v4; // r14
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // edx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  int v11; // edx

  v4 = a2;
  v6 = (unsigned int)(*(_DWORD *)(a1 + 104) << 9)
     + 40LL
     + 8LL * (unsigned int)HvpCountSetRangesInVector((PRTL_BITMAP)(a1 + 88));
  if ( RtlAreBitsClear((PRTL_BITMAP)(a1 + 88), 0, 8u) )
    v6 += 4104LL;
  v7 = *(unsigned int *)(a1 + 180);
  v8 = 0;
  *a3 = 0;
  v9 = v6 + v7;
  if ( *(_BYTE *)(a1 + 195) )
  {
    v8 = 2;
    *a3 = 2;
  }
  if ( v9 > 0x2000000 )
  {
    v8 |= 4u;
    *a3 = v8;
  }
  if ( *(_DWORD *)(a1 + 172) == -1 )
  {
    v8 |= 8u;
    *a3 = v8;
  }
  if ( v8 )
  {
    LOBYTE(v10) = CmpIsWriteQueueActive((_QWORD *)(a1 + 4208));
    if ( (_BYTE)v10 )
    {
      v11 = v8 | 1;
      goto LABEL_14;
    }
  }
  if ( v6 + (unsigned __int64)*(unsigned int *)(a1 + 180) >= v4 )
  {
    v8 |= 0x10u;
    *a3 = v8;
  }
  v10 = v6 + *(unsigned int *)(a1 + 180);
  if ( v10 >= v4 )
  {
    v11 = v8 | 0x20;
LABEL_14:
    *a3 = v11;
  }
  return v10;
}
