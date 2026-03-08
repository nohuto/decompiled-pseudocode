/*
 * XREFs of ?AddResourceNotifier@CD3DResource@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x180284A30
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@QEAAPEAPEAVIDeviceResourceNotify@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800B96A4 (--$_Emplace_reallocate@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$all.c)
 */

void __fastcall CD3DResource::AddResourceNotifier(CD3DResource *this, struct IDeviceResourceNotify *a2)
{
  _BYTE *v3; // rdx
  struct IDeviceResourceNotify *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = (_BYTE *)*((_QWORD *)this + 10);
  if ( v3 == *((_BYTE **)this + 11) )
  {
    std::vector<IDeviceResourceNotify *>::_Emplace_reallocate<IDeviceResourceNotify * const &>(
      (const void **)this + 9,
      v3,
      &v4);
  }
  else
  {
    *(_QWORD *)v3 = a2;
    *((_QWORD *)this + 10) += 8LL;
  }
}
