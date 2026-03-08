/*
 * XREFs of XmInt1aWriteConfigRegister @ 0x140532B88
 * Callers:
 *     XmExecuteInt1a @ 0x140532794 (XmExecuteInt1a.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall XmInt1aWriteConfigRegister(__int64 a1)
{
  int v1; // edx
  char v2; // di
  _BYTE *v4; // rcx
  _BYTE *v5; // r9
  int v6; // r8d
  int v7; // eax
  __int64 result; // rax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 24);
  v2 = 0;
  v11 = 0;
  v4 = (_BYTE *)(a1 + 36);
  if ( (_BYTE)v1 == 12 && (*v4 & 1) != 0 || (v5 = v4, (_BYTE)v1 == 13) && (*v4 & 3) != 0 )
  {
    *(_DWORD *)(a1 + 16) |= 1u;
    v5 = v4;
    *(_BYTE *)(a1 + 25) = -121;
  }
  switch ( v1 )
  {
    case 11:
      v7 = *(unsigned __int8 *)(a1 + 28);
      v6 = 1;
      break;
    case 12:
      v7 = *(unsigned __int16 *)(a1 + 28);
      v6 = 2;
      break;
    case 13:
      v7 = *(_DWORD *)(a1 + 28);
      v6 = 4;
      break;
    default:
      v6 = 0;
      goto LABEL_14;
  }
  v11 = v7;
LABEL_14:
  result = ((__int64 (__fastcall *)(_QWORD, _QWORD, int *, _QWORD, int))XmSetPciData)(
             *(unsigned __int8 *)(a1 + 37),
             ((unsigned __int8)*v5 >> 3) | (32 * (*v5 & 7u)),
             &v11,
             *(unsigned __int16 *)(a1 + 52),
             v6);
  v9 = *(_DWORD *)(a1 + 16);
  if ( (_DWORD)result )
  {
    v2 = -121;
    v10 = v9 | 1;
  }
  else
  {
    v10 = v9 & 0xFFFFFFFE;
  }
  *(_DWORD *)(a1 + 16) = v10;
  *(_BYTE *)(a1 + 25) = v2;
  return result;
}
