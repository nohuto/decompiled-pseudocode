/*
 * XREFs of XmImulxOp @ 0x1405321D0
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 */

__int64 __fastcall XmImulxOp(int *a1)
{
  int v1; // eax
  unsigned __int16 v2; // dx
  __int64 v3; // r10
  int v4; // r11d
  __int64 v5; // rcx
  bool v6; // zf
  _WORD *v7; // rbx
  __int64 v8; // rcx
  int v9; // r9d
  int v10; // edx
  unsigned int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // [rsp+30h] [rbp+8h]

  v1 = a1[30];
  if ( v1 )
  {
    v7 = a1 + 8;
    if ( v1 == 3 )
    {
      v15 = a1[26] * (__int64)a1[27];
      XmStoreResult((__int64)a1, a1[26] * a1[27]);
      *(_QWORD *)(v8 + 88) = v7;
      XmStoreResult(v8, SHIDWORD(v15));
      v6 = v10 == v9 >> 31;
    }
    else
    {
      XmStoreResult((__int64)a1, (unsigned __int16)(*((_WORD *)a1 + 52) * *((_WORD *)a1 + 54)));
      *(_QWORD *)(v12 + 88) = v7;
      XmStoreResult(v12, HIWORD(v11));
      v6 = *v7 == (unsigned __int16)(*(__int16 *)(v13 + 24) >> 15);
    }
  }
  else
  {
    v2 = *((char *)a1 + 104) * *((char *)a1 + 108);
    a1[30] = 1;
    XmStoreResult((__int64)a1, v2);
    v6 = *(_BYTE *)(v3 + 25) == (unsigned __int8)(*(char *)(v5 + 24) >> 7);
  }
  LOBYTE(v4) = !v6;
  result = (v4 << 11) | v4 & 0xFFFFF7FF | *(_DWORD *)(v3 + 16) & 0xFFFFF7FE;
  *(_DWORD *)(v3 + 16) = result;
  return result;
}
