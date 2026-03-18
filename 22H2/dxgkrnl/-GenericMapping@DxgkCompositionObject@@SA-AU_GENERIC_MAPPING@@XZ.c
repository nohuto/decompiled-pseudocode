/*
 * XREFs of ?GenericMapping@DxgkCompositionObject@@SA?AU_GENERIC_MAPPING@@XZ @ 0x1C001727C
 * Callers:
 *     CreateDxgkSharedObjectTypes @ 0x1C022146C (CreateDxgkSharedObjectTypes.c)
 * Callees:
 *     <none>
 */

struct _GENERIC_MAPPING *__fastcall DxgkCompositionObject::GenericMapping(struct _GENERIC_MAPPING *__return_ptr retstr)
{
  struct _GENERIC_MAPPING *result; // rax

  result = retstr;
  *retstr = (struct _GENERIC_MAPPING)xmmword_1C009FDA0;
  return result;
}
