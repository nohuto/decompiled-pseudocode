/*
 * XREFs of ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180219C30
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180049354 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x180217F5C (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 *     ?Add@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBIAEBQEAVInternalFilterInput@@@Z @ 0x180217FA4 (-Add@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBI.c)
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x180218E44 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ?RemoveRange@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHHH@Z @ 0x180219EB0 (-RemoveRange@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@Q.c)
 *     ??0InternalFilterInput@@QEAA@IAEBUtagRECT@@PEAVCResource@@@Z @ 0x180260B44 (--0InternalFilterInput@@QEAA@IAEBUtagRECT@@PEAVCResource@@@Z.c)
 *     ?Update@InternalFilterInput@@QEAAXIAEBUtagRECT@@PEAVCResource@@@Z @ 0x180260BA0 (-Update@InternalFilterInput@@QEAAXIAEBUtagRECT@@PEAVCResource@@@Z.c)
 */

__int64 __fastcall CFilterEffect::ProcessUpdateInputs(
        CFilterEffect *this,
        struct CResourceTable *a2,
        __int64 a3,
        _BYTE *a4,
        unsigned int a5)
{
  struct CResource **v5; // rdi
  CResourceTable *v8; // r9
  int v9; // ebx
  unsigned int v10; // ebp
  struct CResource *ResourceWithoutType; // r15
  __int64 v12; // rcx
  __int64 v13; // rdi
  _DWORD *v14; // rax
  unsigned int *v15; // rsi
  unsigned int v16; // edx
  __int64 v17; // rcx
  InternalFilterInput *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v25; // [rsp+80h] [rbp+18h]
  InternalFilterInput *v26; // [rsp+88h] [rbp+20h] BYREF

  v25 = a3;
  v5 = 0LL;
  v8 = a2;
  if ( !is_mul_ok(*(unsigned int *)(a3 + 12), 0x1CuLL) )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0x2AAu, 0LL);
LABEL_35:
    CFilterEffect::EmptyFilterInputMap(this);
    goto LABEL_36;
  }
  if ( 28LL * *(unsigned int *)(a3 + 12) != a5 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(a5, 0LL, 0, -2003303421, 0x2AEu, 0LL);
    goto LABEL_35;
  }
  v9 = 0;
  if ( a4 )
  {
    v10 = 0;
    if ( *(_DWORD *)(a3 + 12) )
    {
      while ( 1 )
      {
        ResourceWithoutType = 0LL;
        v12 = 28LL * v10;
        v13 = 0LL;
        if ( *((int *)this + 38) <= 0 )
          goto LABEL_10;
        a3 = *((int *)this + 38);
        v14 = (_DWORD *)*((_QWORD *)this + 17);
        while ( *v14 != *(_DWORD *)&a4[v12] )
        {
          ++v13;
          ++v14;
          if ( v13 >= a3 )
            goto LABEL_10;
        }
        if ( v13 == -1 )
LABEL_10:
          v5 = 0LL;
        else
          v5 = *(struct CResource ***)(*((_QWORD *)this + 18) + 8 * v13);
        v15 = (unsigned int *)&a4[v12];
        if ( (a4[v12 + 24] & 2) == 0 )
          break;
        if ( v5 )
        {
          CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveRange(
            (char *)this + 136,
            *v15,
            a3,
            v8);
          InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v5);
LABEL_25:
          v8 = a2;
        }
        v5 = 0LL;
        if ( ++v10 >= *(_DWORD *)(v25 + 12) )
          goto LABEL_27;
      }
      v16 = v15[1];
      if ( v16 )
      {
        ResourceWithoutType = CResourceTable::GetResourceWithoutType(v8, v16);
        if ( !ResourceWithoutType )
        {
          v9 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2003303421, 0x2CBu, 0LL);
          goto LABEL_35;
        }
      }
      if ( v5 )
      {
        CResource::UnRegisterNotifierInternal(this, v5[3]);
        InternalFilterInput::Update(
          (InternalFilterInput *)v5,
          v15[6],
          (const struct tagRECT *)(v15 + 2),
          ResourceWithoutType);
      }
      else
      {
        v18 = (InternalFilterInput *)operator new(0x20uLL);
        if ( !v18 )
        {
          v5 = 0LL;
LABEL_32:
          v9 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024882, 0x2D2u, 0LL);
          goto LABEL_35;
        }
        v26 = InternalFilterInput::InternalFilterInput(
                v18,
                v15[6],
                (const struct tagRECT *)(v15 + 2),
                ResourceWithoutType);
        v5 = (struct CResource **)v26;
        if ( !v26 )
          goto LABEL_32;
        if ( !(unsigned int)CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::Add(
                              (__int64)this + 136,
                              v15,
                              &v26) )
        {
          v9 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024882, 0x2D5u, 0LL);
          v5 = (struct CResource **)v26;
          goto LABEL_35;
        }
        v5 = (struct CResource **)v26;
      }
      v21 = CResource::RegisterNotifier(this, v5[3]);
      v9 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x2E7u, 0LL);
        goto LABEL_35;
      }
      goto LABEL_25;
    }
  }
LABEL_27:
  if ( v9 < 0 )
    goto LABEL_35;
LABEL_36:
  if ( v5 )
    InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v5);
  return (unsigned int)v9;
}
