__int64 __fastcall HvcallFastExtended(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  char v9; // si
  __int64 v10; // rbx
  int v12; // [rsp+30h] [rbp-58h] BYREF
  char v13; // [rsp+34h] [rbp-54h]
  __int16 v14; // [rsp+35h] [rbp-53h]
  char v15; // [rsp+37h] [rbp-51h]
  _OWORD v16[2]; // [rsp+38h] [rbp-50h] BYREF

  memset(v16, 0, sizeof(v16));
  if ( (BYTE4(xmmword_140D1EAD0) & 0x10) != 0 )
  {
    v9 = 1;
    EtwGetKernelTraceTimestampSilo((LARGE_INTEGER *)v16, 0xA0000010, 0LL);
  }
  else
  {
    v9 = 0;
  }
  if ( a5 )
  {
    v10 = HvcallpExtendedFastHypercallWithOutput(a1, a2, (a3 + 15) >> 4, 0, a4, a5 >> 4);
    if ( !v9 )
      return v10;
LABEL_8:
    v15 = 0;
    v12 = (unsigned __int16)a1;
    v13 = BYTE2(a1) & 1;
    v14 = (int)a1 < 0;
    EtwTraceTimedEvent(3954, 0xA0000010, (__int64)&v12, 8, 4200962, (__int64)v16);
    return v10;
  }
  v10 = HvcallpExtendedFastHypercall(a1, a2, a3);
  if ( v9 )
    goto LABEL_8;
  return v10;
}
