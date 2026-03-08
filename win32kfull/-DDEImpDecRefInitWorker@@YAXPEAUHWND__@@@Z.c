/*
 * XREFs of ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01CCE50
 * Callers:
 *     NtUserfnDDEINIT @ 0x1C01E1520 (NtUserfnDDEINIT.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C002484C (InternalRemoveProp.c)
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 */

void __fastcall DDEImpDecRefInitWorker(HWND a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 Prop; // rax
  _WORD *v4; // rbx

  v1 = HMValidateHandleNoSecure((int)a1, 1);
  v2 = v1;
  if ( v1 )
  {
    Prop = GetProp(v1, (unsigned __int16)atomDDEImp, 1u);
    v4 = (_WORD *)Prop;
    if ( Prop )
    {
      if ( (*(_WORD *)(Prop + 88))-- == 1 )
      {
        InternalRemoveProp(v2, (unsigned __int16)atomDDEImp, 1u);
        if ( !v4[45] )
        {
          SeDeleteClientSecurity(v4 + 8);
          Win32FreePool(v4);
        }
      }
    }
  }
}
