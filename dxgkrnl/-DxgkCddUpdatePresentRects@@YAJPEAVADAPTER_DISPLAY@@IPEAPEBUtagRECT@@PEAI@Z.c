/*
 * XREFs of ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C0163D40
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0163594 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 * Callees:
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C000122C (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C01B021C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1C02DBCD4 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 */

__int64 __fastcall DxgkCddUpdatePresentRects(DXGADAPTER **a1, unsigned int a2, struct tagRECT **a3, unsigned int *a4)
{
  __int64 v6; // rdi
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  DXGADAPTER *v10; // rcx
  int v11; // r14d
  int v12; // r15d
  LONG right; // ecx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  unsigned int v15; // [rsp+40h] [rbp-20h] BYREF
  struct tagRECT *v16; // [rsp+48h] [rbp-18h] BYREF
  struct tagRECT v17; // [rsp+50h] [rbp-10h] BYREF

  v16 = 0LL;
  v15 = -1;
  v6 = a2;
  CddInterface = ADAPTER_DISPLAY::GetCddInterface(a1, a2);
  if ( CddInterface )
  {
    (*((void (__fastcall **)(_QWORD, struct tagRECT **, unsigned int *))CddInterface + 3))(
      *(_QWORD *)CddInterface,
      &v16,
      &v15);
    if ( v15 )
    {
      if ( v15 != -1 )
      {
        v10 = a1[16];
        v11 = *((_DWORD *)v10 + 1000 * v6 + 159) - *((_DWORD *)v10 + 1000 * v6 + 157);
        v12 = *((_DWORD *)v10 + 1000 * v6 + 160) - *((_DWORD *)v10 + 1000 * v6 + 158);
        v17 = (struct tagRECT)*((_OWORD *)v10 + 250 * v6 + 43);
        if ( (((unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(a1, (unsigned int)v6, 1LL) - 2) & 0xFFFFFFFD) == 0 )
        {
          right = v17.right;
          v17.right = v17.bottom;
          v17.bottom = right;
        }
        CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation(a1, (unsigned int)v6, 0LL);
        DxgkpConvertRects(v11, v12, CurrentOrientation, &v17, v15, v16, v16);
        *a4 = v15;
        *a3 = v16;
      }
    }
    else
    {
      *a4 = 0;
    }
  }
  return 0LL;
}
