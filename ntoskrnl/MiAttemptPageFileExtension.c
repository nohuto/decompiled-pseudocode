/*
 * XREFs of MiAttemptPageFileExtension @ 0x140A2F9B4
 * Callers:
 *     MiExtendPagingFiles @ 0x140A2FD7C (MiExtendPagingFiles.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiFinishPageFileExtension @ 0x1406376C8 (MiFinishPageFileExtension.c)
 *     IopQueryXxxInformation @ 0x14071E6CC (IopQueryXxxInformation.c)
 *     IoSetInformation @ 0x14087E920 (IoSetInformation.c)
 */

unsigned __int64 __fastcall MiAttemptPageFileExtension(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // rax
  unsigned __int64 i; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  struct _FILE_OBJECT *v15; // rcx
  int v16; // eax
  __int64 v18; // [rsp+40h] [rbp-29h] BYREF
  __int64 v19[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v20; // [rsp+58h] [rbp-11h]
  _QWORD FileInformation[3]; // [rsp+60h] [rbp-9h] BYREF
  unsigned int v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+7Ch] [rbp+13h]

  v3 = *(_QWORD *)(a2 + 248);
  v23 = 0;
  v20 = 0LL;
  v5 = *(_QWORD *)(a2 + 8);
  *(_OWORD *)v19 = 0LL;
  if ( *(_QWORD *)a2 != v5
    && (int)IopQueryXxxInformation(*(struct _FILE_OBJECT **)(a2 + 56), 3, 0x18u, 0, (struct _IRP *)v19, &v18, 0) >= 0 )
  {
    for ( i = 0x4000LL; ; i = 4096LL )
    {
      if ( a3 >= i )
      {
        v9 = a3;
        i = 4096LL;
      }
      else
      {
        v9 = i;
      }
      v10 = *(_QWORD *)(a2 + 8);
      v11 = *(_QWORD *)a2;
      v12 = v10 - *(_QWORD *)a2;
      if ( v9 <= v12 )
        v12 = v9;
      v13 = v19[1] * (unsigned int)(v20 * HIDWORD(v20));
      if ( v13 <= 0x10000000 )
        break;
      v14 = (v13 - 0x10000000) >> 12;
      if ( v14 > v12 )
        v14 = v12;
      if ( (*(_BYTE *)(a2 + 204) & 0x10) != 0 && v14 < a3 )
        break;
      v15 = *(struct _FILE_OBJECT **)(a2 + 56);
      FileInformation[0] = (v11 + v14) << 12;
      v16 = ~*(_BYTE *)(a1 + 79) & 0x20;
      FileInformation[1] = v11 << 12;
      FileInformation[2] = v10 << 12;
      v22 = (v16 | 8u) >> 3;
      if ( !IoSetInformation(v15, FileEndOfFileInformation, 0x20u, FileInformation) )
      {
        MiFinishPageFileExtension(v3, a2, v14);
        return v14;
      }
      if ( i == 4096 )
        return 0LL;
    }
  }
  return 0LL;
}
