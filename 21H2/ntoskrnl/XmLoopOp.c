/*
 * XREFs of XmLoopOp @ 0x1403C0980
 * Callers:
 *     XmEmulateStream @ 0x140397358 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x140396F10 (XmStoreResult.c)
 */

__int64 __fastcall XmLoopOp(__int64 a1)
{
  int v1; // r9d
  int v2; // r9d
  char v3; // dl
  __int64 v4; // rcx
  int v5; // r9d
  unsigned int v6; // r10d
  __int64 result; // rax
  unsigned int v8; // eax

  v1 = *(_DWORD *)(a1 + 28);
  *(_QWORD *)(a1 + 88) = a1 + 28;
  v2 = v1 - 1;
  v3 = *(_BYTE *)(a1 + 137);
  if ( !v3 )
    v2 = (unsigned __int16)v2;
  *(_DWORD *)(a1 + 120) = v3 != 0 ? 3 : 1;
  XmStoreResult(a1, v2);
  if ( (*(_DWORD *)(v4 + 112) & 3) != 0 )
  {
    if ( (*(_DWORD *)(v4 + 112) & 3) != v6 )
    {
      result = v6;
      goto LABEL_6;
    }
    v8 = *(_DWORD *)(v4 + 16) >> 6;
  }
  else
  {
    v8 = ~(*(_DWORD *)(v4 + 16) >> 6);
  }
  result = v6 & v8;
LABEL_6:
  if ( (_DWORD)result )
  {
    if ( v5 )
    {
      result = *(unsigned __int16 *)(v4 + 104);
      *(_DWORD *)(v4 + 20) = result;
    }
  }
  return result;
}
