/*
 * XREFs of FreeImeHotKeys @ 0x1C011F1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _tagIMEHOTKEYOBJ **FreeImeHotKeys()
{
  struct _tagIMEHOTKEYOBJ **result; // rax
  struct _tagIMEHOTKEYOBJ *v1; // rbx

  result = (struct _tagIMEHOTKEYOBJ **)gpImeHotKeyListHeader;
  if ( gpImeHotKeyListHeader )
  {
    do
    {
      v1 = *result;
      Win32FreePool(result);
      gpImeHotKeyListHeader = v1;
      result = (struct _tagIMEHOTKEYOBJ **)v1;
    }
    while ( v1 );
  }
  return result;
}
