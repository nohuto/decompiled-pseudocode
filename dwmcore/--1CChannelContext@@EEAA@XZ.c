/*
 * XREFs of ??1CChannelContext@@EEAA@XZ @ 0x1800A9D2C
 * Callers:
 *     ??_ECChannelContext@@EEAAPEAXI@Z @ 0x1800A9B60 (--_ECChannelContext@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?erase@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@QEAA_KAEBQEAVCChannelContext@@@Z @ 0x1800242D8 (-erase@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCChannelContext@@U-$h.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x1800AB2F8 (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CChannelContext::~CChannelContext(CChannelContext *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  CChannelContext *v7; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CChannelContext::`vftable';
  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 16);
    v7 = this;
    std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::erase(
      (_QWORD *)(*(_QWORD *)(v3 + 424) + 464LL),
      (const unsigned __int8 *)&v7);
  }
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 4) = 0LL;
  }
  ReleaseInterface<CProcessAttribution>((char *)this + 48);
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 8) = 0LL;
  }
  operator delete(*((void **)this + 7));
  v6 = (void *)*((_QWORD *)this + 3);
  if ( v6 )
    operator delete(v6);
}
