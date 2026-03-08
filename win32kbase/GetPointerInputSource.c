/*
 * XREFs of GetPointerInputSource @ 0x1C00F4410
 * Callers:
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01FDB10 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPointerInputSource(int a1, int a2, int a3, _DWORD *a4)
{
  __int64 result; // rax
  int v5; // r10d
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  result = 4LL;
  v5 = 2;
  v6 = a1 - 1;
  if ( !v6 )
    goto LABEL_10;
  v7 = v6 - 1;
  if ( !v7 )
  {
    *a4 = 4;
    goto LABEL_11;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    *a4 = 8;
    goto LABEL_11;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    *a4 = 2;
    goto LABEL_11;
  }
  if ( v9 != 1 )
  {
LABEL_10:
    *a4 = 0;
    goto LABEL_11;
  }
  *a4 = 16;
LABEL_11:
  if ( !a2 || a3 )
    v5 = 1;
  a4[1] = v5;
  return result;
}
