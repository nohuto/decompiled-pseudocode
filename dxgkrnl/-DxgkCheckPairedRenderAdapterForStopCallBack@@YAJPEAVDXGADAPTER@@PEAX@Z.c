/*
 * XREFs of ?DxgkCheckPairedRenderAdapterForStopCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02B1EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0003EC8 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0009274 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0009580 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000B3E4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z @ 0x1C003EF3C (-GetPairedRenderAdapter@ADAPTER_DISPLAY@@QEBAXAEAVDXGADAPTER_REFERENCE@@PEAU_GUID@@@Z.c)
 *     ?SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z @ 0x1C003FB08 (-SetPairedRenderAdapter@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@PEBU_GUID@@@Z.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C01C7244 (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C03CEFC0 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 */

__int64 __fastcall DxgkCheckPairedRenderAdapterForStopCallBack(struct DXGADAPTER *a1, DXGADAPTER *a2)
{
  __int64 v2; // rsi
  unsigned int v5; // r15d
  unsigned int i; // r14d
  struct DXGDEVICE *VidPnSourceOwner; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned int v10; // ebx
  DXGADAPTER *v12[2]; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v13[8]; // [rsp+30h] [rbp-39h] BYREF
  struct DXGADAPTER *v14; // [rsp+38h] [rbp-31h]
  char v15; // [rsp+40h] [rbp-29h]
  _BYTE v16[64]; // [rsp+50h] [rbp-19h] BYREF

  v2 = *((_QWORD *)a1 + 365);
  v14 = a1;
  v15 = 0;
  v5 = *(_DWORD *)(v2 + 96);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  if ( *((_DWORD *)a1 + 50) == 1 )
  {
    if ( *((_BYTE *)a2 + 209) && !*((_QWORD *)a1 + 366) )
    {
      COREACCESS::COREACCESS((COREACCESS *)v16, a1);
      COREACCESS::AcquireExclusive((__int64)v16, 1u, 0);
      for ( i = 0; i < v5; ++i )
      {
        VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)v2, i);
        if ( VidPnSourceOwner && *(DXGADAPTER **)(*((_QWORD *)VidPnSourceOwner + 2) + 16LL) == a2 )
        {
          v8 = *(_QWORD *)(v2 + 448);
          v9 = 2920LL * i;
          BLTQUEUE::Flush((BLTQUEUE *)(v9 + *(_QWORD *)(v8 + 8)));
          BLTQUEUE::Reset((BLTQUEUE *)(v9 + *(_QWORD *)(v8 + 8)), 0);
        }
      }
      COREACCESS::~COREACCESS((COREACCESS *)v16);
    }
    v12[0] = 0LL;
    ADAPTER_DISPLAY::GetPairedRenderAdapter((ADAPTER_DISPLAY *)v2, v12, 0LL);
    if ( v12[0] == a2 )
    {
      v10 = 0;
      if ( v5 )
      {
        while ( !ADAPTER_DISPLAY::IsPartOfDesktop((ADAPTER_DISPLAY *)v2, v10) )
        {
          if ( ++v10 >= v5 )
            goto LABEL_14;
        }
        *(_BYTE *)(v2 + 288) = 1;
      }
      else
      {
LABEL_14:
        ADAPTER_DISPLAY::SetPairedRenderAdapter((ADAPTER_DISPLAY *)v2, 0LL, 0LL);
      }
    }
    DXGADAPTER_REFERENCE::Assign(v12, 0LL);
  }
  if ( v15 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  return 0LL;
}
