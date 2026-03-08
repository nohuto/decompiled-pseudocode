/*
 * XREFs of IopPerfCompletionRoutine @ 0x140556CC0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x14035F4C0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IopPerfCompletionRoutine(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  char v6; // r15
  char v7; // r14
  __int64 (*v8)(void); // r9
  unsigned int v9; // ebp
  __int64 v10; // rbx
  char v11; // al
  _QWORD v13[2]; // [rsp+30h] [rbp-58h] BYREF
  int v14; // [rsp+40h] [rbp-48h]
  _QWORD *v15; // [rsp+48h] [rbp-40h] BYREF
  int v16; // [rsp+50h] [rbp-38h]
  int v17; // [rsp+54h] [rbp-34h]

  v3 = *a3;
  v6 = *(_BYTE *)(a2 + 67);
  v7 = *(_BYTE *)(a2 + 66) + 1;
  *(_BYTE *)(v3 + 3) = *((_BYTE *)a3 + 28) | *(_BYTE *)(*a3 + 3) & 2;
  v8 = (__int64 (*)(void))a3[2];
  *(_QWORD *)(v3 + 56) = v8;
  *(_QWORD *)(v3 + 64) = a3[1];
  if ( v8 )
  {
    v14 = *((_DWORD *)a3 + 6);
    v13[0] = v8;
    v13[1] = a2;
    v17 = 0;
    v9 = v8();
    v16 = 20;
    v15 = v13;
    EtwTraceKernelEvent((__int64)&v15, 1u, 0x20000010u, 0x125u, 0x401802u);
    if ( v9 == -1073741802 )
      return v9;
  }
  else
  {
    if ( *(_BYTE *)(a2 + 65) && *(_BYTE *)(a2 + 67) <= *(_BYTE *)(a2 + 66) )
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v9 = 0;
  }
  if ( v6 != v7 )
  {
    a3[2] = 0LL;
    v10 = v3 + 72;
    a3[1] = *(_QWORD *)(v10 + 64);
    *a3 = v10;
    *((_BYTE *)a3 + 28) = *(_BYTE *)(v10 + 3);
    v11 = *(_BYTE *)(v10 + 3);
    if ( *(int *)(a2 + 48) < 0 )
    {
      if ( v11 < 0 )
        goto LABEL_10;
    }
    else if ( (v11 & 0x40) != 0 )
    {
      goto LABEL_10;
    }
    if ( !*(_BYTE *)(a2 + 68) || (v11 & 0x20) == 0 )
    {
      *(_BYTE *)(v10 + 3) = v11 | 0xC0;
      goto LABEL_11;
    }
LABEL_10:
    a3[2] = *(_QWORD *)(v10 + 56);
    a3[1] = *(_QWORD *)(v10 + 64);
LABEL_11:
    *(_QWORD *)(v10 + 64) = a3;
    *(_QWORD *)(v10 + 56) = IopPerfCompletionRoutine;
  }
  return v9;
}
