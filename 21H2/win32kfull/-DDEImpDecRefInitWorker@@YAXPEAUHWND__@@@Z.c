/*
 * XREFs of ?DDEImpDecRefInitWorker@@YAXPEAUHWND__@@@Z @ 0x1C01F0590
 * Callers:
 *     NtUserfnDDEINIT @ 0x1C0200C50 (NtUserfnDDEINIT.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     InternalRemoveProp @ 0x1C0069510 (InternalRemoveProp.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 */

void __fastcall DDEImpDecRefInitWorker(HWND a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 Prop; // rax
  __int64 v4; // rbx

  v1 = HMValidateHandleNoSecure((int)a1, 1);
  v2 = v1;
  if ( v1 )
  {
    Prop = GetProp(v1, (unsigned __int16)atomDDEImp, 1u);
    v4 = Prop;
    if ( Prop )
    {
      if ( (*(_WORD *)(Prop + 88))-- == 1 )
      {
        InternalRemoveProp(v2, (unsigned __int16)atomDDEImp, 1u);
        if ( !*(_WORD *)(v4 + 90) )
        {
          SeDeleteClientSecurity(v4 + 16);
          Win32FreePool(v4);
        }
      }
    }
  }
}
