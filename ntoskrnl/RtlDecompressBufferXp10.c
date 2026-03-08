/*
 * XREFs of RtlDecompressBufferXp10 @ 0x1409C1120
 * Callers:
 *     <none>
 * Callees:
 *     RtlDecompressBuffer2Xp10 @ 0x1409C0EF0 (RtlDecompressBuffer2Xp10.c)
 */

__int64 __fastcall RtlDecompressBufferXp10(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _DWORD *a6,
        _QWORD *a7)
{
  int v7; // edx
  int v9; // [rsp+20h] [rbp-48h]
  _QWORD v10[2]; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v11[3]; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+70h] [rbp+8h] BYREF

  v12 = 0LL;
  v10[1] = a4;
  v11[1] = (unsigned int)a2;
  v10[0] = a3;
  v11[0] = a1;
  v7 = RtlDecompressBuffer2Xp10(v11, a2, v10, a4, v9, &v12, a7);
  if ( v7 >= 0 )
  {
    if ( v12 <= 0xFFFFFFFF )
      *a6 = v12;
    else
      return (unsigned int)-1073741246;
  }
  return (unsigned int)v7;
}
