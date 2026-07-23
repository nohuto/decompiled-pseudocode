/*
 * XREFs of XmInt1aWriteConfigRegister @ 0x1404E84F0
 * Callers:
 *     XmExecuteInt1a @ 0x1404E8114 (XmExecuteInt1a.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall XmInt1aWriteConfigRegister(__int64 a1)
{
  char v1; // di
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // r8d
  int v7; // eax
  __int64 result; // rax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v3 = *(unsigned __int8 *)(a1 + 24);
  v11 = 0;
  if ( (_BYTE)v3 == 12 && (*(_BYTE *)(a1 + 36) & 1) != 0 || (_BYTE)v3 == 13 && (*(_BYTE *)(a1 + 36) & 3) != 0 )
  {
    *(_DWORD *)(a1 + 16) |= 1u;
    *(_BYTE *)(a1 + 25) = -121;
  }
  v4 = v3 - 11;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
      {
        v6 = 0;
        goto LABEL_14;
      }
      v7 = *(_DWORD *)(a1 + 28);
      v6 = 4;
    }
    else
    {
      v7 = *(unsigned __int16 *)(a1 + 28);
      v6 = 2;
    }
  }
  else
  {
    v7 = *(unsigned __int8 *)(a1 + 28);
    v6 = 1;
  }
  v11 = v7;
LABEL_14:
  result = ((__int64 (__fastcall *)(_QWORD, _QWORD, int *, _QWORD, int))XmSetPciData)(
             *(unsigned __int8 *)(a1 + 37),
             (*(unsigned __int8 *)(a1 + 36) >> 3) | (32 * (*(_BYTE *)(a1 + 36) & 7u)),
             &v11,
             *(unsigned __int16 *)(a1 + 52),
             v6);
  v9 = *(_DWORD *)(a1 + 16);
  if ( (_DWORD)result )
  {
    v1 = -121;
    v10 = v9 | 1;
  }
  else
  {
    v10 = v9 & 0xFFFFFFFE;
  }
  *(_DWORD *)(a1 + 16) = v10;
  *(_BYTE *)(a1 + 25) = v1;
  return result;
}
