/*
 * XREFs of ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C00161A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x1C00163B0 (-UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C00667F0 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 */

__int64 __fastcall CFlipExBuffer::NotifyTokenInFrame(CFlipExBuffer *this, const struct CToken *a2, bool *a3)
{
  int v4; // esi
  const struct CToken *v7; // rdi
  int v8; // ebp
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // r14
  _DWORD *v12; // rsi
  const struct ScrollOptimization *v13; // rdi
  int v15; // esi
  char v16; // al

  v4 = 0;
  *a3 = 0;
  v7 = 0LL;
  if ( (*(unsigned int (__fastcall **)(const struct CToken *))(*(_QWORD *)a2 + 64LL))(a2) == 1 )
    v7 = a2;
  else
    v4 = -1073741811;
  v8 = 0;
  if ( v4 < 0 )
    v8 = v4;
  if ( v8 >= 0 )
  {
    v9 = *((_DWORD *)v7 + 26);
    if ( v9 >= *((_DWORD *)this + 60) )
    {
      v8 = -1073741811;
      goto LABEL_15;
    }
    *((_DWORD *)this + 61) = (*(__int64 (__fastcall **)(const struct CToken *))(*(_QWORD *)v7 + 112LL))(v7);
    if ( *((_DWORD *)this + 87) != v9 )
    {
      *((_DWORD *)this + 87) = v9;
      *a3 = 1;
      if ( (*(unsigned __int8 (__fastcall **)(const struct CToken *))(*(_QWORD *)a2 + 144LL))(a2) )
        *((_BYTE *)this + 570) = 0;
    }
    if ( CFlipExBuffer::UpdateAttributes(this, v7) )
      *a3 = 1;
    v10 = *((_DWORD *)this + 88);
    if ( v10 == -1 )
    {
      v16 = 1;
      goto LABEL_27;
    }
    if ( v10 != 1 )
    {
      if ( v10 > 2 )
      {
        v15 = 4;
        if ( v10 <= 4 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(const struct CToken *))(*(_QWORD *)v7 + 144LL))(v7) )
          {
            v16 = *((_BYTE *)this + 569);
          }
          else
          {
            v16 = 1;
            v15 = -1;
          }
          *((_DWORD *)this + 88) = v15;
LABEL_27:
          if ( !v16 )
            goto LABEL_15;
          goto LABEL_33;
        }
      }
LABEL_15:
      if ( v8 >= 0 )
      {
        v11 = *((_QWORD *)v7 + 10);
        v12 = (_DWORD *)((char *)this + 256);
        v13 = (const struct CToken *)((char *)v7 + 52);
        if ( *((_DWORD *)this + 64) )
        {
          CCompositionBuffer::AddScrollAsDirty(this, (CFlipExBuffer *)((char *)this + 256));
          *v12 = 0;
          *((_BYTE *)this + 42) = 1;
        }
        if ( v13 && *(_DWORD *)v13 )
        {
          if ( *((_BYTE *)this + 42) )
          {
            CCompositionBuffer::AddScrollAsDirty(this, v13);
          }
          else
          {
            *(_OWORD *)v12 = *(_OWORD *)v13;
            *((_QWORD *)this + 34) = *((_QWORD *)v13 + 2);
            *((_DWORD *)this + 70) = *((_DWORD *)v13 + 6);
          }
        }
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11) )
        {
          (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 31) + 48LL))(
            *((_QWORD *)this + 31),
            v11,
            2LL);
          *((_BYTE *)this + 42) = 1;
        }
      }
      return (unsigned int)v8;
    }
    if ( (*(unsigned __int8 (__fastcall **)(const struct CToken *))(*(_QWORD *)v7 + 168LL))(v7) )
    {
      *((_DWORD *)this + 88) = -1;
    }
    else
    {
      if ( !*((_BYTE *)v7 + 557) || *((_QWORD *)v7 + 72) != *((_QWORD *)this + 60) )
        goto LABEL_15;
      *((_DWORD *)this + 88) = 2;
    }
LABEL_33:
    *a3 = 1;
    goto LABEL_15;
  }
  return (unsigned int)v8;
}
