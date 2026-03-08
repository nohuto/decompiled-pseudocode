/*
 * XREFs of IopParseFile @ 0x14076A460
 * Callers:
 *     <none>
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 */

__int64 __fastcall IopParseFile(
        struct _FILE_OBJECT *a1,
        POBJECT_TYPE *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rax

  if ( a2 != IoFileObjectType || !a8 || *(_WORD *)a8 != 8 || *(_WORD *)(a8 + 2) != 224 )
    return 3221225508LL;
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  *(_QWORD *)(a8 + 40) = a1;
  return IopParseDevice((ULONG_PTR)RelatedDeviceObject, a5, a6, a7, a8, a9, a10, a11);
}
