/*
 * XREFs of ?InsertCascadedTokenWait@CFlipExBuffer@@QEAAJPEA_K0@Z @ 0x1C00670B0
 * Callers:
 *     ?NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z @ 0x1C000F63C (-NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipExBuffer::InsertCascadedTokenWait(
        CFlipExBuffer *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx

  result = 3221225473LL;
  if ( *((_BYTE *)this + 624) || (v7 = *((_QWORD *)this + 77)) == 0 )
  {
    *((_BYTE *)this + 624) = 0;
    return 3221226029LL;
  }
  else
  {
    v8 = *((unsigned int *)this + 149);
    if ( (_DWORD)v8 && *((_DWORD *)this + 152) )
    {
      result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 64LL))(
                 v7,
                 v8,
                 *((unsigned int *)this + 148),
                 *((_QWORD *)this + 80));
      v9 = ++*((_QWORD *)this + 80);
      if ( (int)result >= 0 )
      {
        *a2 = *((_QWORD *)this + 79);
        *a3 = v9;
        *((_BYTE *)this + 580) = 1;
      }
    }
  }
  return result;
}
