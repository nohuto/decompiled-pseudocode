/*
 * XREFs of _lambda_86d58a30ac6ca0f5146c7ad98b0ef6a6_::operator() @ 0x1C0143734
 * Callers:
 *     ?xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z @ 0x1C0143B68 (-xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z.c)
 * Callees:
 *     ?RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C01438A4 (-RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 */

int __fastcall lambda_86d58a30ac6ca0f5146c7ad98b0ef6a6_::operator()(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  int *v3; // rax
  int v4; // r8d
  _OWORD **v5; // rax
  _OWORD *v6; // r8
  __int128 v7; // xmm0
  _OWORD *v8; // r8
  const struct _UNICODE_STRING *v9; // r8
  int result; // eax

  v2 = a2 + 72;
  v3 = *(int **)(a1 + 8);
  *(_DWORD *)(a2 + 68) = **(_BYTE **)a1 != 0;
  v4 = *v3;
  v5 = *(_OWORD ***)(a1 + 16);
  *(_DWORD *)(a2 + 64) = v4;
  v6 = *v5;
  if ( *v5 )
  {
    *(_OWORD *)v2 = *v6;
    a2 += 200LL;
    *(_OWORD *)(v2 + 16) = v6[1];
    *(_OWORD *)(v2 + 32) = v6[2];
    *(_OWORD *)(v2 + 48) = v6[3];
    *(_OWORD *)(v2 + 64) = v6[4];
    *(_OWORD *)(v2 + 80) = v6[5];
    *(_OWORD *)(v2 + 96) = v6[6];
    v7 = v6[7];
    v8 = v6 + 8;
    *(_OWORD *)(v2 + 112) = v7;
    *(_OWORD *)(v2 + 128) = *v8;
    *(_OWORD *)(v2 + 144) = v8[1];
    *(_OWORD *)(v2 + 160) = v8[2];
    *(_OWORD *)(v2 + 176) = v8[3];
    *(_OWORD *)(v2 + 192) = v8[4];
    *(_QWORD *)(v2 + 208) = *((_QWORD *)v8 + 10);
    *(_DWORD *)(v2 + 216) = *((_DWORD *)v8 + 22);
  }
  v9 = **(const struct _UNICODE_STRING ***)(a1 + 24);
  if ( !v9 )
    return 0;
  result = RtlStringCchCopyUnicodeString((unsigned __int16 *)v2, a2, v9);
  if ( result >= 0 )
    return 0;
  return result;
}
