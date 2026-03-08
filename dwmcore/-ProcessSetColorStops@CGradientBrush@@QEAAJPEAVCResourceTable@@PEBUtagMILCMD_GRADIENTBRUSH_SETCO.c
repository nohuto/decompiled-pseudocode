/*
 * XREFs of ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z @ 0x1800B9474
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180049354 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ??$_Emplace_reallocate@PEAVCColorGradientStop@@@?$vector@PEAVCColorGradientStop@@V?$allocator@PEAVCColorGradientStop@@@std@@@std@@QEAAPEAPEAVCColorGradientStop@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x1800B95D0 (--$_Emplace_reallocate@PEAVCColorGradientStop@@@-$vector@PEAVCColorGradientStop@@V-$allocator@PE.c)
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x1800B9B84 (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CGradientBrush::ProcessSetColorStops(
        CGradientBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GRADIENTBRUSH_SETCOLORSTOPS *a3,
        unsigned int *a4,
        unsigned int a5)
{
  struct CResource **v6; // rdi
  unsigned int v7; // r15d
  CResourceTable *v9; // r8
  CResource *v10; // r12
  struct CResource **v11; // rbx
  unsigned int v12; // r14d
  struct CResource *ResourceWithoutType; // r12
  __int64 v14; // rsi
  gsl::details *v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-40h]
  _QWORD v18[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v19; // [rsp+40h] [rbp-20h] BYREF
  struct CResource **v20; // [rsp+50h] [rbp-10h]

  v6 = 0LL;
  v7 = 0;
  v20 = 0LL;
  v9 = a2;
  v10 = this;
  v19 = 0LL;
  if ( *((_DWORD *)a3 + 3) != a5 || (a5 & 3) != 0 )
  {
    v17 = 210;
LABEL_22:
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, v17, 0LL);
    v14 = v19;
    goto LABEL_13;
  }
  v11 = (struct CResource **)*((_QWORD *)&v19 + 1);
  v12 = 0;
  if ( a5 >> 2 )
  {
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(v9, *a4);
      if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
              ResourceWithoutType,
              23LL) )
        break;
      v18[0] = ResourceWithoutType;
      if ( v11 == v6 )
      {
        std::vector<CColorGradientStop *>::_Emplace_reallocate<CColorGradientStop *>(&v19, v11, v18);
        v6 = v20;
        v11 = (struct CResource **)*((_QWORD *)&v19 + 1);
      }
      else
      {
        *v11++ = ResourceWithoutType;
        *((_QWORD *)&v19 + 1) = v11;
      }
      ++v12;
      ++a4;
      if ( v12 >= a5 >> 2 )
      {
        v10 = this;
        goto LABEL_10;
      }
      v9 = a2;
    }
    v17 = 219;
    goto LABEL_22;
  }
LABEL_10:
  v14 = v19;
  gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v18, (int)((__int64)((__int64)v11 - v19) >> 3));
  v18[1] = v14;
  if ( v18[0] == -1LL || !v14 && v18[0] )
  {
    gsl::details::terminate(v15);
    JUMPOUT(0x1800B95C8LL);
  }
  CGradientBrush::SetStops(v10);
LABEL_13:
  if ( v14 )
    std::_Deallocate<16,0>(v14, ((unsigned __int64)v6 - v14) & 0xFFFFFFFFFFFFFFF8uLL);
  return v7;
}
