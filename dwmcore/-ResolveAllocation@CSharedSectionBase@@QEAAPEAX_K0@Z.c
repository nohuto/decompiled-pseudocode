/*
 * XREFs of ?ResolveAllocation@CSharedSectionBase@@QEAAPEAX_K0@Z @ 0x1800981C8
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180097F68 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x1800AB374 (-ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x1800E0B74 (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO.c)
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x1800E0DB4 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x1800E32E4 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPILEDEFFECTTEM.c)
 *     ?ProcessVailPerFrameDataBuffer@CSuperWetSource@@QEAAJPEAVCCrossContainerGuestReadWriteSharedSection@@II@Z @ 0x18022B2D8 (-ProcessVailPerFrameDataBuffer@CSuperWetSource@@QEAAJPEAVCCrossContainerGuestReadWriteSharedSect.c)
 *     ?ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INJECTIONANIMATION_SETINJECTIONDATA@@@Z @ 0x18022BC3C (-ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INJECTIONAN.c)
 *     ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x180236A10 (-ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION.c)
 *     ?GetSharedSectionData@CSharedSectionWrapper@@QEBA?AV?$span@E$0?0@gsl@@XZ @ 0x18024E3CC (-GetSharedSectionData@CSharedSectionWrapper@@QEBA-AV-$span@E$0-0@gsl@@XZ.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x1802507C8 (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 *     ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSectionBase@@III@Z @ 0x180260F50 (-Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSectionBase@@III@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall CSharedSectionBase::ResolveAllocation(
        CSharedSectionBase *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rax

  v3 = *((unsigned int *)this + 18);
  if ( a2 < v3 && a3 <= v3 - a2 && (v4 = *((_QWORD *)this + 10)) != 0 )
    return (void *)(a2 + v4);
  else
    return 0LL;
}
