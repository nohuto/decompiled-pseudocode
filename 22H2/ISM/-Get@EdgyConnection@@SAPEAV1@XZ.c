/*
 * XREFs of ?Get@EdgyConnection@@SAPEAV1@XZ @ 0x18003027C
 * Callers:
 *     ??0EdgyControllerServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180030204 (--0EdgyControllerServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??0EdgyControllerClientProxy@@QEAA@AEBV?$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z @ 0x1800FF98C (--0EdgyControllerClientProxy@@QEAA@AEBV-$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z.c)
 *     ??0EdgyProcessor@@QEAA@XZ @ 0x180177CB4 (--0EdgyProcessor@@QEAA@XZ.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002819C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

struct EdgyConnection *EdgyConnection::Get(void)
{
  struct EdgyConnection *result; // rax
  struct EdgyConnection *v1; // rax
  struct EdgyConnection *v2; // rbx
  struct EdgyConnection *v3; // rcx

  result = (struct EdgyConnection *)EdgyConnection::s_spThis;
  if ( !EdgyConnection::s_spThis )
  {
    v1 = (struct EdgyConnection *)RefCountedObject::operator new(0x60uLL);
    v2 = v1;
    if ( v1 )
    {
      *((_QWORD *)v1 + 2) = 0LL;
      *((_QWORD *)v1 + 3) = 0LL;
      *((_QWORD *)v1 + 4) = 0LL;
      *((_QWORD *)v1 + 5) = 0LL;
      *((_QWORD *)v1 + 6) = 0LL;
      *((_QWORD *)v1 + 7) = 0LL;
      *((_QWORD *)v1 + 8) = 0LL;
      *(_QWORD *)v1 = &RefCountedObject::`vftable';
      *(_QWORD *)v1 = &EdgyConnection::`vftable';
      *((_DWORD *)v1 + 2) = 1;
      *((_QWORD *)v1 + 9) = 0LL;
      *((_QWORD *)v1 + 10) = 0LL;
      *((_QWORD *)v1 + 11) = 0LL;
    }
    else
    {
      v2 = 0LL;
    }
    result = (struct EdgyConnection *)EdgyConnection::s_spThis;
    if ( (struct EdgyConnection *)EdgyConnection::s_spThis != v2 )
    {
      if ( v2 )
      {
        (*(void (__fastcall **)(struct EdgyConnection *))(*(_QWORD *)v2 + 8LL))(v2);
        result = (struct EdgyConnection *)EdgyConnection::s_spThis;
      }
      v3 = result;
      EdgyConnection::s_spThis = (__int64)v2;
      result = v2;
      if ( v3 )
      {
        (*(void (__fastcall **)(struct EdgyConnection *))(*(_QWORD *)v3 + 16LL))(v3);
        return (struct EdgyConnection *)EdgyConnection::s_spThis;
      }
    }
  }
  return result;
}
