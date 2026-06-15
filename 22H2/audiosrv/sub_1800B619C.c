/*
 * XREFs of sub_1800B619C @ 0x1800B619C
 * Callers:
 *     sub_1800B4610 @ 0x1800B4610 (sub_1800B4610.c)
 *     sub_1800B4684 @ 0x1800B4684 (sub_1800B4684.c)
 *     sub_1800B4E60 @ 0x1800B4E60 (sub_1800B4E60.c)
 *     sub_1800B5F60 @ 0x1800B5F60 (sub_1800B5F60.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 */

__int64 __fastcall sub_1800B619C(void *a1, size_t a2, const void *a3, size_t a4)
{
  unsigned int *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx

  if ( !a4 )
    return 0LL;
  if ( !a1 )
    goto LABEL_4;
  if ( a3 && a2 >= a4 )
  {
    memcpy(a1, a3, a4);
    return 0LL;
  }
  memset(a1, 0, a2);
  if ( !a3 )
  {
LABEL_4:
    v8 = (unsigned int *)o__errno(a1);
    v10 = 22;
LABEL_5:
    *v8 = v10;
    o__invalid_parameter_noinfo(v9);
    return v10;
  }
  if ( a2 < a4 )
  {
    v8 = (unsigned int *)o__errno(a1);
    v10 = 34;
    goto LABEL_5;
  }
  return 22LL;
}
