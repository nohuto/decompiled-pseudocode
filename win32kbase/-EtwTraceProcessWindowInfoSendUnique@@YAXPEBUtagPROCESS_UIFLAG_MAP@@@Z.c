/*
 * XREFs of ?EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z @ 0x1C01615A8
 * Callers:
 *     EtwTraceProcessWindowInfo @ 0x1C009B6E0 (EtwTraceProcessWindowInfo.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 *     McTemplateK0qqmx_EtwWriteTransfer @ 0x1C016671C (McTemplateK0qqmx_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceProcessWindowInfoSendUnique(const struct tagPROCESS_UIFLAG_MAP *a1)
{
  unsigned int v1; // ebx
  char *v3; // rcx
  _DWORD *v4; // r8
  char *v5; // rdx
  __int128 v6; // xmm1
  int v7; // r8d
  int v8; // r9d

  v1 = 0;
  if ( !gfProcessWindowInfoInit )
  {
    gfProcessWindowInfoInit = 1;
    memset(&gaProcessUIFlagMap, 0, 0x280uLL);
  }
  v3 = (char *)&gaProcessUIFlagMap;
  v4 = &gaProcessUIFlagMap;
  while ( 1 )
  {
    if ( v4[6] < *((_DWORD *)v3 + 6) )
      v3 = (char *)&gaProcessUIFlagMap + 32 * v1;
    if ( *(_QWORD *)v4 == *(_QWORD *)a1 )
      break;
    ++v1;
    v4 += 8;
    if ( v1 >= 0x14 )
      goto LABEL_8;
  }
  v5 = (char *)&gaProcessUIFlagMap + 32 * v1;
  if ( !v5 )
  {
LABEL_8:
    v5 = v3;
    v6 = *((_OWORD *)a1 + 1);
    *(_OWORD *)v3 = *(_OWORD *)a1;
    *((_OWORD *)v3 + 1) = v6;
    goto LABEL_9;
  }
  v7 = *((_DWORD *)a1 + 5);
  v8 = *((_DWORD *)v5 + 5);
  *((_DWORD *)v5 + 6) = *((_DWORD *)a1 + 6);
  if ( (v8 & v7) == v7 )
    return;
  LODWORD(v4) = v8 | v7;
  *((_DWORD *)v5 + 5) = (_DWORD)v4;
LABEL_9:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000000000LL) != 0 )
    McTemplateK0qqmx_EtwWriteTransfer(
      (_DWORD)v5 + 8,
      (_DWORD)v5,
      (_DWORD)v4,
      *((_DWORD *)v5 + 5),
      *((_DWORD *)v5 + 4),
      (__int64)(v5 + 8),
      *(_QWORD *)v5);
}
