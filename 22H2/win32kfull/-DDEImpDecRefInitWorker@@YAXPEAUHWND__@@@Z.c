/*
 * XREFs of ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01CBD60
 * Callers:
 *     NtUserfnDDEINIT @ 0x1C01E0470 (NtUserfnDDEINIT.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C00C94BC (InternalRemoveProp.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

void __fastcall DDEImpDecRefInitWorker(HWND a1)
{
  __int64 v1; // rax
  __int64 v2; // r9
  __int64 v3; // rdi
  __int64 Prop; // rax
  _WORD *v5; // rbx

  v1 = HMValidateHandleNoSecure((int)a1, 1);
  v3 = v1;
  if ( v1 )
  {
    Prop = GetProp(v1, (unsigned __int16)atomDDEImp, 1LL, v2);
    v5 = (_WORD *)Prop;
    if ( Prop )
    {
      if ( (*(_WORD *)(Prop + 88))-- == 1 )
      {
        InternalRemoveProp(v3, (unsigned __int16)atomDDEImp, 1u);
        if ( !v5[45] )
        {
          SeDeleteClientSecurity(v5 + 8);
          Win32FreePool(v5);
        }
      }
    }
  }
}
