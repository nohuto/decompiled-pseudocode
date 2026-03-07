__int64 __fastcall NtUserfnOUTSTRING(__int64 a1, unsigned int a2, SIZE_T a3, _BYTE *a4, __int64 a5, char a6, int a7)
{
  int v11; // ecx
  int v12; // r8d
  SIZE_T v13; // rdx
  ULONG v14; // r8d
  __int64 v15; // rbx
  int v17; // [rsp+48h] [rbp-20h] BYREF
  int v18; // [rsp+4Ch] [rbp-1Ch]
  _BYTE *v19; // [rsp+50h] [rbp-18h]

  PtiCurrentShared(a1);
  v11 = (a7 << 31) ^ (a3 ^ (a7 << 31)) & 0x7FFFFFFF;
  v18 = v11;
  v12 = v11;
  if ( !a7 )
  {
    v11 ^= (v11 ^ (2 * v11)) & 0x7FFFFFFF;
    v12 = v11;
    v18 = v11;
  }
  v13 = v11 & 0x7FFFFFFF;
  if ( v13 < a3 )
  {
    v15 = 0LL;
    UserSetLastError(0);
    return v15;
  }
  v17 = 0;
  v19 = a4;
  if ( (v11 & 0x7FFFFFFF) != 0 )
  {
    v14 = (v11 >> 31) + 2;
  }
  else
  {
    if ( !a4 )
      goto LABEL_10;
    v13 = ((unsigned __int64)(unsigned int)~v12 >> 31) + 1;
    v14 = (v11 >> 31) + 2;
  }
  ProbeForWrite(a4, v13, v14);
LABEL_10:
  v15 = (*((__int64 (__fastcall **)(__int64, _QWORD, SIZE_T, int *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
         + ((a6 + 6) & 0x1F)))(
          a1,
          a2,
          a3,
          &v17,
          a5);
  if ( !v15 && a3 )
  {
    if ( a7 )
      *a4 = 0;
    else
      *(_WORD *)a4 = 0;
  }
  return v15;
}
