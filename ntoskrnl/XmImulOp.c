/*
 * XREFs of XmImulOp @ 0x140532120
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 */

__int64 __fastcall XmImulOp(int *a1)
{
  int v1; // eax
  int v2; // r10d
  __int64 v3; // r11
  char v4; // r9
  char v5; // r9^1
  bool v6; // zf
  int v7; // r9d
  __int16 v8; // r9
  __int16 v9; // r9d^2
  __int64 result; // rax
  __int64 v11; // [rsp+30h] [rbp+8h]

  v1 = a1[30];
  if ( v1 )
  {
    if ( v1 == 3 )
    {
      v11 = a1[26] * (__int64)a1[27];
      XmStoreResult((__int64)a1, a1[26] * a1[27]);
      v6 = HIDWORD(v11) == v7 >> 31;
    }
    else
    {
      XmStoreResult((__int64)a1, (unsigned __int16)(*((_WORD *)a1 + 52) * *((_WORD *)a1 + 54)));
      v6 = v9 == (__int16)(v8 >> 15);
    }
  }
  else
  {
    XmStoreResult((__int64)a1, (unsigned __int8)(*((_BYTE *)a1 + 104) * *((_BYTE *)a1 + 108)));
    v6 = v5 == (char)(v4 >> 7);
  }
  LOBYTE(v2) = !v6;
  result = (v2 << 11) | v2 & 0xFFFFF7FF | *(_DWORD *)(v3 + 16) & 0xFFFFF7FE;
  *(_DWORD *)(v3 + 16) = result;
  return result;
}
