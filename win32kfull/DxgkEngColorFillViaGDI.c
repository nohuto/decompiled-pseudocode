/*
 * XREFs of DxgkEngColorFillViaGDI @ 0x1C02724F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     NtGdiPatBlt @ 0x1C008B370 (NtGdiPatBlt.c)
 */

__int64 __fastcall DxgkEngColorFillViaGDI(HDC a1, _DWORD *a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v5; // ebp
  __int64 v6; // rsi
  __int64 SolidBrush; // rax
  __int64 v11; // r15
  __int64 v12; // r14
  int *v13; // rdi
  unsigned int v14; // eax
  unsigned int v15; // eax
  _QWORD v17[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  v6 = a4;
  if ( a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v17, a1);
    if ( v17[0] )
    {
      SolidBrush = GreCreateSolidBrush(((unsigned __int8)a5 << 16) | BYTE2(a5) | a5 & 0xFF00u);
      v11 = SolidBrush;
      if ( SolidBrush )
      {
        v12 = GreSelectBrush(a1, SolidBrush);
        if ( (_DWORD)v6 )
        {
          v13 = (int *)(a3 + 4);
          if ( a2 )
          {
            do
            {
              v14 = NtGdiPatBlt(a1, *a2 + *(v13 - 1), *v13 + a2[1], v13[1] - *(v13 - 1), v13[2] - *v13, 15728673);
              v13 += 4;
              v5 = v14;
              --v6;
            }
            while ( v6 );
          }
          else
          {
            do
            {
              v15 = NtGdiPatBlt(a1, *(v13 - 1), *v13, v13[1] - *(v13 - 1), v13[2] - *v13, 15728673);
              v13 += 4;
              v5 = v15;
              --v6;
            }
            while ( v6 );
          }
        }
        if ( v12 )
          GreSelectBrush(a1, v12);
        GreDeleteObject(v11);
      }
    }
    if ( v17[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v17);
  }
  return v5;
}
