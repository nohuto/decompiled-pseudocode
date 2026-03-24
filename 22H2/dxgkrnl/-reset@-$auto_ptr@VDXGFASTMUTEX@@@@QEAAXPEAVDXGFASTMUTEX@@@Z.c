/*
 * XREFs of ?reset@?$auto_ptr@VDXGFASTMUTEX@@@@QEAAXPEAVDXGFASTMUTEX@@@Z @ 0x1C000B60C
 * Callers:
 *     ??0DXGDISPLAYMANAGEROBJECT@@QEAA@_N@Z @ 0x1C0142394 (--0DXGDISPLAYMANAGEROBJECT@@QEAA@_N@Z.c)
 *     ??0Lockable@@QEAA@XZ @ 0x1C017D59C (--0Lockable@@QEAA@XZ.c)
 *     ??0DXGDISPLAYMANAGERSOURCEOBJECT@@QEAA@PEAVDXGDISPLAYMANAGEROBJECT@@U_LUID@@I@Z @ 0x1C02B12F0 (--0DXGDISPLAYMANAGERSOURCEOBJECT@@QEAA@PEAVDXGDISPLAYMANAGEROBJECT@@U_LUID@@I@Z.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C000B66C (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

void *__fastcall auto_ptr<DXGFASTMUTEX>::reset(void **a1, void *a2)
{
  void *v4; // rcx
  void *result; // rax

  v4 = *a1;
  if ( a2 != v4 && v4 )
    result = DXGFASTMUTEX::`scalar deleting destructor'(v4, (unsigned int)a2);
  *a1 = a2;
  return result;
}
