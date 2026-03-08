/*
 * XREFs of ?SetHandleProperty@CCompiledEffectTemplateMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C005CF00
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C005CF5C (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 */

__int64 __fastcall DirectComposition::CCompiledEffectTemplateMarshaler::SetHandleProperty(
        DirectComposition::CCompiledEffectTemplateMarshaler *this,
        int a2,
        void *a3,
        bool *a4)
{
  __int64 result; // rax
  int v8; // edx
  struct DirectComposition::CEvent **v9; // r8

  result = 0LL;
  if ( a3 )
  {
    v8 = a2 - 4;
    if ( v8 )
    {
      if ( v8 != 1 )
        return 3221225485LL;
      v9 = (struct DirectComposition::CEvent **)((char *)this + 88);
    }
    else
    {
      v9 = (struct DirectComposition::CEvent **)((char *)this + 96);
    }
    result = DirectComposition::CEvent::Create(a3, v8, v9);
    if ( !(_DWORD)result )
    {
      *((_DWORD *)this + 4) &= ~0x40u;
      *a4 = 1;
    }
  }
  return result;
}
