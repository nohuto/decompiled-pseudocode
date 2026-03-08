/*
 * XREFs of ?ValidateGdiCommand@@YAEIIPEBE00_K1PEBUtagRECT@@2IIEEIPEAPEAE@Z @ 0x1C0372E38
 * Callers:
 *     ?VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0373960 (-VmBusCddGdiCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?ValidateRect@@YAEPEBUtagRECT@@@Z @ 0x1C0373114 (-ValidateRect@@YAEPEBUtagRECT@@@Z.c)
 *     ?ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z @ 0x1C0373188 (-ValidateRectBounds@@YAEPEBUtagRECT@@I_K@Z.c)
 *     ?ValidateSubRect@@YAEPEBUtagRECT@@0@Z @ 0x1C0373280 (-ValidateSubRect@@YAEPEBUtagRECT@@0@Z.c)
 */

unsigned __int8 __fastcall ValidateGdiCommand(
        unsigned int a1,
        unsigned int a2,
        const unsigned __int8 *a3,
        unsigned __int8 *a4,
        const unsigned __int8 *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        const struct tagRECT *a8,
        const struct tagRECT *a9,
        unsigned int a10,
        unsigned int a11,
        unsigned __int8 a12,
        char a13,
        unsigned int a14,
        unsigned __int8 **a15)
{
  unsigned __int64 v15; // rax
  unsigned int v17; // r9d
  __int64 v18; // rdi
  const unsigned __int8 *v19; // rcx
  unsigned __int8 *v20; // rsi
  char v21; // bl
  __int64 v22; // rdi
  const wchar_t *v23; // r9
  int v24; // edi

  v15 = 16LL * a14;
  if ( v15 > 0xFFFFFFFF )
  {
    v18 = 2354LL;
    WdLogSingleEntry1(2LL, 2354LL);
    goto LABEL_32;
  }
  v17 = v15 + a1;
  if ( (unsigned int)v15 + a1 < a1 )
  {
    v18 = 2360LL;
    WdLogSingleEntry1(2LL, 2360LL);
    goto LABEL_32;
  }
  if ( v17 <= a2 )
  {
    if ( *a15 <= a5 )
    {
      v18 = 2370LL;
      WdLogSingleEntry1(2LL, 2370LL);
      goto LABEL_32;
    }
    v19 = &a4[v17];
    v20 = (unsigned __int8 *)&a3[*a15 - a5];
    *a15 = v20;
    if ( v20 <= a4 || v20 >= v19 || v19 - v20 < (int)v15 )
    {
      v18 = 2377LL;
      WdLogSingleEntry1(2LL, 2377LL);
      goto LABEL_32;
    }
    v21 = 0;
    if ( !ValidateRect(a8) )
    {
      v22 = 2391LL;
      WdLogSingleEntry1(2LL, 2391LL);
      v23 = L"Invalid DstRect";
LABEL_26:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v23, v22, 0LL, 0LL, 0LL, 0LL);
      return v21;
    }
    v24 = 0;
    if ( a14 )
    {
      while ( ValidateSubRect((const struct tagRECT *)&v20[16 * v24], a8) )
      {
        if ( !ValidateRectBounds((const struct tagRECT *)&v20[16 * v24], a10, a6) )
        {
          v22 = 2411LL;
          WdLogSingleEntry1(2LL, 2411LL);
          goto LABEL_21;
        }
        if ( ++v24 >= a14 )
          goto LABEL_16;
      }
      v22 = 2406LL;
      WdLogSingleEntry1(2LL, 2406LL);
LABEL_21:
      v23 = L"Invalid subrect";
      goto LABEL_26;
    }
LABEL_16:
    if ( a9 )
    {
      if ( !ValidateRect(a9) )
      {
        v22 = 2419LL;
        WdLogSingleEntry1(2LL, 2419LL);
LABEL_25:
        v23 = L"Invalid SrcRect";
        goto LABEL_26;
      }
      if ( a13 && !ValidateRectBounds(a9, a11, a7) )
      {
        v22 = 2426LL;
        WdLogSingleEntry1(2LL, 2426LL);
        goto LABEL_25;
      }
    }
    return 1;
  }
  v18 = 2365LL;
  WdLogSingleEntry1(2LL, 2365LL);
LABEL_32:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Malformed packet", v18, 0LL, 0LL, 0LL, 0LL);
  return 0;
}
