/*
 * XREFs of ?GetEffectiveInputSink@CInteraction@@UEBAXW4InputType@@PEAPEAX@Z @ 0x18012DBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::GetEffectiveInputSink(_QWORD *a1, int a2, _QWORD *a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  __int64 result; // rax

  v3 = a2 - 2;
  if ( v3 && (v4 = v3 - 1) != 0 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( (unsigned int)(v5 - 1) < 2 )
        result = a1[1];
      else
        result = 0LL;
    }
    else
    {
      result = a1[4];
    }
  }
  else
  {
    result = a1[3];
  }
  *a3 = result;
  return result;
}
