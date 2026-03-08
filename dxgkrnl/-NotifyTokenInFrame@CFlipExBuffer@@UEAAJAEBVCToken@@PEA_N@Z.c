/*
 * XREFs of ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C007D970
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z @ 0x1C0001720 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?GetRealizationAt@CCompositionBuffer@@IEBAPEAVCBufferRealization@@I@Z @ 0x1C000D574 (-GetRealizationAt@CCompositionBuffer@@IEBAPEAVCBufferRealization@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z @ 0x1C00774BC (-FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z.c)
 *     ?UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x1C007DEE4 (-UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z.c)
 *     ?UpdateIndependentFlipState@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x1C007E3B8 (-UpdateIndependentFlipState@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z.c)
 */

__int64 __fastcall CFlipExBuffer::NotifyTokenInFrame(CFlipExBuffer *this, const struct CToken *a2, bool *a3)
{
  const struct CFlipToken *v6; // rax
  int v7; // r9d
  const struct CFlipToken *v8; // rdi
  int v9; // esi
  unsigned int v10; // ebp
  struct CBufferRealization *RealizationAt; // rax
  int v12; // ecx

  *a3 = 0;
  v6 = CFlipToken::FromToken(a2);
  v7 = 0;
  v8 = v6;
  if ( !v6 )
    v7 = -1073741811;
  v9 = 0;
  if ( v7 < 0 )
    v9 = v7;
  if ( v9 >= 0 )
  {
    v10 = *((_DWORD *)v6 + 26);
    if ( v10 >= *((_DWORD *)this + 68) )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      *((_DWORD *)this + 69) = (*(__int64 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)v6 + 112LL))(v6);
      if ( *((_DWORD *)this + 95) != v10 )
      {
        *((_DWORD *)this + 95) = v10;
        *a3 = 1;
        if ( (*(unsigned __int8 (__fastcall **)(const struct CToken *))(*(_QWORD *)a2 + 144LL))(a2) )
          *((_BYTE *)this + 626) = 0;
      }
      if ( CFlipExBuffer::UpdateAttributes(this, v8) )
        *a3 = 1;
      if ( CFlipExBuffer::UpdateIndependentFlipState(this, v8) )
        *a3 = 1;
      RealizationAt = CCompositionBuffer::GetRealizationAt(this, v10);
      v12 = *((_DWORD *)v8 + 139);
      if ( v12 != *((_DWORD *)RealizationAt + 20) )
      {
        *((_DWORD *)RealizationAt + 20) = v12;
        *a3 = 1;
      }
      CCompositionBuffer::NotifyDirty(
        this,
        *((const struct IRegion **)v8 + 10),
        (const struct CFlipToken *)((char *)v8 + 52));
    }
  }
  return (unsigned int)v9;
}
