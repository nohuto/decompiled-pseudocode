/*
 * XREFs of DpIndicateChildStatus @ 0x1C005D370
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C0060BE0 (DpiMiracastTearDownAssociation.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A240 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0040104 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     DpiFdoInitializeConnectionChangePackage @ 0x1C005EA28 (DpiFdoInitializeConnectionChangePackage.c)
 *     DpiFdoQueueConnectionChangePackage @ 0x1C005EB78 (DpiFdoQueueConnectionChangePackage.c)
 */

__int64 __fastcall DpIndicateChildStatus(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // ebx
  char v5; // r12
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v6; // ebp
  __int64 v7; // rsi
  _QWORD *v8; // r13
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // r8
  _QWORD v17[10]; // [rsp+40h] [rbp-98h] BYREF

  v2 = 0;
  v5 = 0;
  v6 = D3DKMDT_VOT_UNINITIALIZED;
  if ( !a1 || !a2 )
  {
    v12 = -1073741811LL;
    v2 = -1073741811;
    goto LABEL_37;
  }
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 || *(_QWORD *)(v7 + 16) != 0x274727044LL )
    goto LABEL_15;
  v8 = v17;
  memset(v17, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v17[1]);
  v10 = *a2;
  v11 = *a2;
  v17[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v17[4]) = v10;
  LODWORD(v17[3]) = 12;
  LOBYTE(v17[6]) = -1;
  if ( *(_QWORD *)(v7 + 5648) )
    v8 = *(_QWORD **)(v7 + 5648);
  if ( !v10 )
  {
    if ( !*(_BYTE *)(v7 + 1154) )
      return v2;
    v5 = 1;
    goto LABEL_30;
  }
  v11 = (unsigned int)(v11 - 1);
  if ( !(_DWORD)v11 )
  {
    v13 = *(_DWORD *)(v7 + 3240) == a2[1];
LABEL_18:
    if ( v13 )
      goto LABEL_15;
LABEL_30:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000) != 0 )
      McTemplateK0pqtqq_EtwWriteTransfer(
        v11,
        &EventDxgkCbIndicateChildStatus,
        v9,
        a1,
        a2[1],
        v10,
        *((unsigned __int8 *)a2 + 8),
        v6);
    v14 = DpiFdoInitializeConnectionChangePackage(
            (_DWORD)v8,
            a2[1],
            *((_BYTE *)a2 + 8) != 0 ? 10 : 8,
            v6,
            0,
            *(_BYTE *)(v7 + 1160) == 0,
            v5,
            0);
    if ( v14 )
    {
      LOBYTE(v15) = 1;
      return (unsigned int)DpiFdoQueueConnectionChangePackage(v7, v14, v15);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  v11 = (unsigned int)(v11 - 1);
  if ( !(_DWORD)v11 )
  {
    WdLogSingleEntry3(4LL, a2[1], *(_QWORD *)(v7 + 24), *((unsigned __int8 *)a2 + 8));
    return v2;
  }
  if ( (_DWORD)v11 == 1 )
  {
    if ( *(_BYTE *)(v7 + 1159) && *(_DWORD *)(v7 + 3240) == -1 )
    {
      if ( !*(_BYTE *)(v7 + 2692) && IsInternalVideoOutput((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a2[3]) )
        goto LABEL_15;
      v6 = a2[3];
      v13 = v6 == D3DKMDT_VOT_MIRACAST;
    }
    else
    {
      if ( !*(_QWORD *)(v7 + 3248) )
      {
        v12 = -1073741637LL;
        goto LABEL_16;
      }
      if ( *(_DWORD *)(v7 + 3240) != a2[1]
        || (v6 = a2[3], IsInternalVideoOutput(v6))
        || v6 == D3DKMDT_VOT_INDIRECT_WIRED )
      {
LABEL_15:
        v12 = -1073741811LL;
LABEL_16:
        v2 = v12;
LABEL_37:
        WdLogSingleEntry1(2LL, v12);
        return v2;
      }
      v13 = v6 == (D3DKMDT_VOT_SVIDEO_7PIN|D3DKMDT_VOT_INDIRECT_WIRED);
    }
    goto LABEL_18;
  }
  return v2;
}
