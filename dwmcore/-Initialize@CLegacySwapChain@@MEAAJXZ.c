/*
 * XREFs of ?Initialize@CLegacySwapChain@@MEAAJXZ @ 0x1800EC4F0
 * Callers:
 *     ?Initialize@CConversionSwapChain@@MEAAJXZ @ 0x18029ED80 (-Initialize@CConversionSwapChain@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@?$vector@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800EC734 (--$_Emplace_reallocate@V-$unique_ptr@VCSwapChainBuffer@@U-$default_delete@VCSwapChainBuffer@@@st.c)
 *     ??1CSwapChainBuffer@@QEAA@XZ @ 0x1801010A0 (--1CSwapChainBuffer@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::Initialize(CLegacySwapChain *this)
{
  _QWORD *v1; // rax
  int v3; // eax
  __int64 v4; // rcx
  int v5; // esi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  void (__fastcall ***v11)(_QWORD, __int64 *); // rcx
  int v12; // r15d
  int v13; // ebx
  CSwapChainBuffer *v14; // r14
  _DWORD *v15; // rax
  __int64 v16; // rcx
  _DWORD *v17; // rdx
  __int64 v18; // rcx
  _DWORD *v19; // rax
  CSwapChainBuffer *v20; // rbx
  CSwapChainBuffer **v21; // rdx
  CSwapChainBuffer *v22; // rbx
  CSwapChainBuffer *v24; // rbx
  CSwapChainBuffer *v25; // [rsp+38h] [rbp-29h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, char *); // [rsp+40h] [rbp-21h] BYREF
  __int64 v27; // [rsp+48h] [rbp-19h] BYREF
  __int64 v28; // [rsp+50h] [rbp-11h]
  _BYTE v29[48]; // [rsp+58h] [rbp-9h] BYREF

  v1 = *(_QWORD **)this;
  v26 = 0LL;
  v3 = ((__int64 (__fastcall *)(CLegacySwapChain *))v1[34])(this);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x62u, 0LL);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(**((_QWORD **)this + 28) + 72LL))(
           *((_QWORD *)this + 28),
           (unsigned int)(*((_DWORD *)this + 79) - 1),
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           &v26);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x66u, 0LL);
    }
    else
    {
      v8 = *((_QWORD *)this + 30);
      *((_QWORD *)this + 30) = 0LL;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      v9 = (**v26)(v26, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, (char *)this + 240);
      v5 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x68u, 0LL);
      }
      else
      {
        v11 = (void (__fastcall ***)(_QWORD, __int64 *))(*((_QWORD *)this + 16)
                                                       + 8LL
                                                       + *(int *)(*(_QWORD *)(*((_QWORD *)this + 16) + 8LL) + 16LL));
        (**v11)(v11, &v27);
        v12 = 0;
        if ( *((_DWORD *)this + 79) )
        {
          while ( 1 )
          {
            v13 = v27;
            v28 = v27;
            v5 = 0;
            v25 = 0LL;
            v14 = 0LL;
            v15 = DefaultHeap::Alloc(0xB0uLL);
            v17 = v15;
            if ( v15 )
            {
              v14 = (CSwapChainBuffer *)v15;
              v15[3] = HIDWORD(v28);
              v18 = (__int64)(v15 + 6);
              *(_QWORD *)v15 = 0LL;
              v15[2] = v13;
              *((_QWORD *)v15 + 2) = v15 + 6;
              v15[6] = 0;
              v15[22] = v12;
              *((_QWORD *)v15 + 12) = 0LL;
              v19 = v15 + 28;
              *((_QWORD *)v17 + 13) = v19;
              *v19 = 0;
            }
            else
            {
              v5 = -2147024882;
              MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x17u, 0LL);
            }
            v20 = v25;
            v25 = v14;
            if ( v20 )
            {
              CSwapChainBuffer::~CSwapChainBuffer(v20);
              operator delete(v20, 0xB0uLL);
              v14 = v25;
            }
            if ( v5 < 0 )
              break;
            v21 = (CSwapChainBuffer **)*((_QWORD *)this + 32);
            if ( v21 == *((CSwapChainBuffer ***)this + 33) )
            {
              std::vector<std::unique_ptr<CSwapChainBuffer>>::_Emplace_reallocate<std::unique_ptr<CSwapChainBuffer>>(
                (char *)this + 248,
                v21,
                &v25);
            }
            else
            {
              v25 = 0LL;
              *v21 = v14;
              *((_QWORD *)this + 32) += 8LL;
            }
            v22 = v25;
            if ( v25 )
            {
              CSwapChainBuffer::~CSwapChainBuffer(v25);
              operator delete(v22, 0xB0uLL);
            }
            if ( (unsigned int)++v12 >= *((_DWORD *)this + 79) )
              goto LABEL_17;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v5, 0x73u, 0LL);
          v24 = v25;
          if ( v25 )
          {
            CSwapChainBuffer::~CSwapChainBuffer(v25);
            operator delete(v24, 0xB0uLL);
          }
        }
        else
        {
LABEL_17:
          (*(void (__fastcall **)(CLegacySwapChain *, _BYTE *))(*(_QWORD *)this + 136LL))(this, v29);
        }
      }
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v26);
  return (unsigned int)v5;
}
