/*
 * XREFs of DrvDbGetDriverDatabaseCompositeMappedPropertyKeys @ 0x140A68954
 * Callers:
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140A68A5C (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 * Callees:
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x1407FF728 (DrvDbGetDriverDatabaseMappedProperty.c)
 */

__int64 __fastcall DrvDbGetDriverDatabaseCompositeMappedPropertyKeys(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8)
{
  __int64 *v8; // rdi
  unsigned int *v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // r14
  unsigned int v12; // esi
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ecx
  int v20; // [rsp+88h] [rbp+20h] BYREF

  a5 = 0;
  v8 = (__int64 *)off_140C04380;
  v9 = a8;
  v10 = 0LL;
  v11 = a6;
  v12 = 0;
  while ( 1 )
  {
    result = DrvDbGetDriverDatabaseMappedProperty(a1, a2, a3, *v8, &v20, 0LL, 0, &a5);
    if ( (_DWORD)result != -1073741772 )
      break;
LABEL_10:
    result = 0LL;
    ++v12;
    ++v8;
    if ( v12 >= 8 )
      return result;
  }
  if ( (_DWORD)result && (_DWORD)result != -1073741789 )
    return result;
  if ( v11 )
  {
    if ( (unsigned int)v10 < a7 )
    {
      v17 = *v8;
      v18 = 5 * v10;
      v10 = (unsigned int)(v10 + 1);
      *(_OWORD *)(v11 + 4 * v18) = *(_OWORD *)*v8;
      *(_DWORD *)(v11 + 4 * v18 + 16) = *(_DWORD *)(v17 + 16);
    }
  }
  v19 = *v9 + 1;
  if ( v19 >= *v9 )
  {
    *v9 = v19;
    goto LABEL_10;
  }
  *v9 = 0;
  return 3221225621LL;
}
