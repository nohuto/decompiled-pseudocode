/*
 * XREFs of ??_GCSceneNodeMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D45C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceMarshalerArray@DirectComposition@@QEAA@XZ @ 0x1C0024AB4 (--1CResourceMarshalerArray@DirectComposition@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 */

DirectComposition::CSceneNodeMarshaler *__fastcall DirectComposition::CSceneNodeMarshaler::`scalar deleting destructor'(
        DirectComposition::CSceneNodeMarshaler *this)
{
  char v2; // r9

  DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray((DirectComposition::CSceneNodeMarshaler *)((char *)this + 88));
  DirectComposition::CResourceMarshalerArray::~CResourceMarshalerArray((DirectComposition::CSceneNodeMarshaler *)((char *)this + 56));
  if ( (v2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
