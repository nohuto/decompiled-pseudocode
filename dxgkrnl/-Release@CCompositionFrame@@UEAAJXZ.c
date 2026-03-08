/*
 * XREFs of ?Release@CCompositionFrame@@UEAAJXZ @ 0x1C0017920
 * Callers:
 *     <none>
 * Callees:
 *     ?ReturnLegacyTokenBuffer@CCompositionFrame@@IEAAXXZ @ 0x1C0017A2C (-ReturnLegacyTokenBuffer@CCompositionFrame@@IEAAXXZ.c)
 *     ?FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x1C0017A54 (-FlipManagerDwmProcessFlipManagerSignal@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionFrame::Release(CCompositionFrame *this)
{
  unsigned __int32 v2; // ebx
  bool v4; // zf
  __int64 (__fastcall ***i)(_QWORD); // rdi
  CCompositionFrame **v6; // r14
  CCompositionFrame **v7; // rax
  CCompositionFrame *v8; // rcx
  CCompositionFrame **v9; // r14
  CCompositionFrame **v10; // rax
  CCompositionFrame *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  CCompositionFrame **v14; // rdi
  CCompositionFrame *v15; // rcx
  CCompositionFrame **v16; // rdi
  CCompositionFrame *v17; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    v4 = *((_DWORD *)this + 24) == 3;
    *(_QWORD *)this = &CCompositionFrame::`vftable';
    if ( !v4 )
    {
      for ( i = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 13); i; *((_QWORD *)this + 13) = i )
      {
        v12 = (**i)(i);
        LOBYTE(v13) = 1;
        i = (__int64 (__fastcall ***)(_QWORD))v12;
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 13) + 8LL))(*((_QWORD *)this + 13), v13);
      }
      *((_DWORD *)this + 24) = 3;
      CCompositionFrame::ReturnLegacyTokenBuffer(this);
      v6 = (CCompositionFrame **)((char *)this + 152);
      v7 = (CCompositionFrame **)*((_QWORD *)this + 19);
      if ( v7[1] == (CCompositionFrame *)((char *)this + 152) )
      {
        v8 = *v7;
        if ( *((CCompositionFrame ***)*v7 + 1) == v7 )
        {
          *v6 = v8;
          *((_QWORD *)v8 + 1) = v6;
          if ( v7 == v6 )
          {
LABEL_9:
            v9 = (CCompositionFrame **)((char *)this + 168);
            v10 = (CCompositionFrame **)*((_QWORD *)this + 21);
            if ( v10[1] == (CCompositionFrame *)((char *)this + 168) )
            {
              v11 = *v10;
              if ( *((CCompositionFrame ***)*v10 + 1) == v10 )
              {
                *v9 = v11;
                *((_QWORD *)v11 + 1) = v9;
                if ( v10 == v9 )
                {
LABEL_12:
                  FlipManagerDwmProcessFlipManagerSignal(
                    (struct _LIST_ENTRY *)((char *)this + 184),
                    *((_QWORD *)this + 11));
                  goto LABEL_13;
                }
                while ( 1 )
                {
                  v16 = v10 - 6;
                  (*((void (__fastcall **)(CCompositionFrame **))*(v10 - 1) + 7))(v10 - 1);
                  ObfDereferenceObject(v16);
                  v10 = (CCompositionFrame **)*v9;
                  if ( *((CCompositionFrame ***)*v9 + 1) != v9 )
                    break;
                  v17 = *v10;
                  if ( *((CCompositionFrame ***)*v10 + 1) != v10 )
                    break;
                  *v9 = v17;
                  *((_QWORD *)v17 + 1) = v9;
                  if ( v10 == v9 )
                    goto LABEL_12;
                }
              }
            }
          }
          else
          {
            while ( 1 )
            {
              v14 = v7 - 1;
              (*((void (__fastcall **)(CCompositionFrame **))*(v7 - 1) + 7))(v7 - 1);
              (*(void (__fastcall **)(CCompositionFrame **, __int64))*v14)(v14, 1LL);
              v7 = (CCompositionFrame **)*v6;
              if ( *((CCompositionFrame ***)*v6 + 1) != v6 )
                break;
              v15 = *v7;
              if ( *((CCompositionFrame ***)*v7 + 1) != v7 )
                break;
              *v6 = v15;
              *((_QWORD *)v15 + 1) = v6;
              if ( v7 == v6 )
                goto LABEL_9;
            }
          }
        }
      }
      __fastfail(3u);
    }
LABEL_13:
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 8LL))(*((_QWORD *)this + 25));
    ExFreePoolWithTag(this, 0);
  }
  return v2;
}
