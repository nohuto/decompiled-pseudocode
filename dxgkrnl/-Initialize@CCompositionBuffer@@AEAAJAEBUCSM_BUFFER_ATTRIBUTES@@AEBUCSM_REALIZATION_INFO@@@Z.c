/*
 * XREFs of ?Initialize@CCompositionBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1C007CC24
 * Callers:
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C007C980 (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z @ 0x1C000CA44 (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@_NPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionBuffer::Initialize(
        CCompositionBuffer *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_REALIZATION_INFO *a3)
{
  __int128 v3; // xmm0
  __int128 v5; // xmm1
  struct DXGGLOBAL *Global; // rax
  int v8; // edi
  __int128 v9; // xmm0
  struct CBufferRealization *v10; // rbx
  _OWORD v12[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]
  struct CBufferRealization *v14; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_OWORD *)a3;
  v14 = 0LL;
  v5 = *((_OWORD *)a3 + 1);
  v12[0] = v3;
  v13 = *((_QWORD *)a3 + 4);
  v12[1] = v5;
  Global = DXGGLOBAL::GetGlobal();
  v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)Global + 38069) + 32LL))((char *)this + 280);
  if ( v8 >= 0 )
  {
    v9 = *(_OWORD *)a2;
    DWORD1(v12[0]) = 0;
    *((_OWORD *)this + 3) = v9;
    *((_OWORD *)this + 4) = *((_OWORD *)a2 + 1);
    *((_OWORD *)this + 5) = *((_OWORD *)a2 + 2);
    *((_OWORD *)this + 6) = *((_OWORD *)a2 + 3);
    *((_OWORD *)this + 7) = *((_OWORD *)a2 + 4);
    *((_OWORD *)this + 8) = *((_OWORD *)a2 + 5);
    *((_OWORD *)this + 9) = *((_OWORD *)a2 + 6);
    *((_OWORD *)this + 10) = *((_OWORD *)a2 + 7);
    *((_OWORD *)this + 11) = *((_OWORD *)a2 + 8);
    v8 = CBufferRealization::Create((const struct CSM_REALIZATION_INFO *)v12, 0, &v14);
    if ( v8 >= 0 )
    {
      v10 = v14;
      v8 = (*(__int64 (__fastcall **)(CCompositionBuffer *, struct CBufferRealization *))(*(_QWORD *)this + 216LL))(
             this,
             v14);
      if ( v8 < 0 )
      {
        if ( v10 )
          (**(void (__fastcall ***)(struct CBufferRealization *, __int64))v10)(v10, 1LL);
      }
    }
  }
  return (unsigned int)v8;
}
