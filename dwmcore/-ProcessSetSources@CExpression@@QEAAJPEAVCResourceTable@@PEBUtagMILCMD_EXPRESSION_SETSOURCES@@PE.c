/*
 * XREFs of ?ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETSOURCES@@PEBXI@Z @ 0x1800490B8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180049354 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?Create@?$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18009990C (-Create@-$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CExpression::ProcessSetSources(
        CExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_EXPRESSION_SETSOURCES *a3,
        unsigned int *a4)
{
  unsigned int v6; // ecx
  unsigned __int64 v9; // r8
  SIZE_T v10; // rax
  unsigned int v11; // ebp
  unsigned int v12; // edx
  __int64 v13; // r9
  struct CResource *ResourceWithoutType; // rax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // edi
  unsigned int v19; // [rsp+20h] [rbp-28h]
  __int64 v20; // [rsp+60h] [rbp+18h] BYREF

  v6 = *((_DWORD *)a3 + 2);
  if ( !v6 || (v9 = *((unsigned int *)a3 + 3), !(_DWORD)v9) || (v6 += *((_DWORD *)this + 106), v6 > (unsigned int)v9) )
  {
    v17 = -2003303421;
    v19 = 69;
    goto LABEL_20;
  }
  if ( (*((_BYTE *)this + 456) & 1) != 0 )
  {
    v17 = -2147467259;
    v19 = 75;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v17, v19, 0LL);
    goto LABEL_21;
  }
  if ( !*((_QWORD *)this + 52) )
  {
    v10 = 8 * v9;
    if ( !is_mul_ok(v9, 8uLL) )
      v10 = -1LL;
    *((_QWORD *)this + 52) = operator new(v10);
  }
  v11 = 0;
  if ( !*((_DWORD *)a3 + 2) )
    return 0;
  while ( 1 )
  {
    v12 = *a4;
    v13 = 0LL;
    v20 = 0LL;
    if ( !v12 )
      goto LABEL_14;
    ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v12);
    if ( !ResourceWithoutType )
      goto LABEL_14;
    v15 = CWeakReference<CResource>::Create(ResourceWithoutType, &v20);
    v17 = v15;
    if ( v15 < 0 )
      break;
    v13 = v20;
LABEL_14:
    ++a4;
    ++v11;
    *(_QWORD *)(*((_QWORD *)this + 52) + 8LL * (unsigned int)(*((_DWORD *)this + 106))++) = v13;
    if ( v11 >= *((_DWORD *)a3 + 2) )
      return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x62u, 0LL);
LABEL_21:
  if ( *((_DWORD *)a3 + 3) )
    *((_BYTE *)this + 456) |= 1u;
  return v17;
}
