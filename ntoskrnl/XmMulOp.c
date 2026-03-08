/*
 * XREFs of XmMulOp @ 0x14039A370
 * Callers:
 *     XmEmulateStream @ 0x1403B8550 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x1403B42E8 (XmStoreResult.c)
 */

__int64 __fastcall XmMulOp(_DWORD *a1)
{
  unsigned int v1; // r9d
  int v2; // eax
  __int64 v3; // rcx
  int v4; // r10d
  bool v5; // zf
  __int64 result; // rax
  unsigned int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // r11
  _WORD *v10; // r11
  __int64 v11; // rcx
  __int64 v12; // r11
  int v13; // edx
  unsigned __int64 v14; // [rsp+30h] [rbp+8h]

  v1 = a1[26] * a1[27];
  v2 = a1[30];
  v14 = (unsigned int)a1[26] * (unsigned __int64)(unsigned int)a1[27];
  if ( v2 )
  {
    if ( v2 == 3 )
    {
      XmStoreResult(a1, v1);
      *(_QWORD *)(v11 + 88) = v12;
      XmStoreResult(v11, HIDWORD(v14));
      v5 = v13 == 0;
    }
    else
    {
      XmStoreResult(a1, (unsigned __int16)v1);
      *(_QWORD *)(v8 + 88) = v9;
      XmStoreResult(v8, HIWORD(v7));
      v5 = *v10 == (unsigned __int16)v4;
    }
  }
  else
  {
    a1[30] = 1;
    XmStoreResult(a1, v1);
    v5 = *(_BYTE *)(v3 + 25) == (unsigned __int8)v4;
  }
  LOBYTE(v4) = !v5;
  result = (v4 << 11) | v4 & 0xFFFFF7FF | *(_DWORD *)(v3 + 16) & 0xFFFFF7FE;
  *(_DWORD *)(v3 + 16) = result;
  return result;
}
