/*
 * XREFs of ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C0027434
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C007F5B4 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@I0@Z @ 0x1C00274F4 (-SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0126BB8 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceReferenceProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        char a3,
        int a4)
{
  unsigned __int64 v5; // r10
  struct DirectComposition::CResourceMarshaler *v6; // r9
  char v8; // bp
  struct DirectComposition::CResourceMarshaler *v10; // r14
  unsigned __int64 v11; // rdx
  int v12; // edi
  int v14; // ebx
  char v15; // al
  int v16; // ecx
  int v17; // r8d

  v5 = (unsigned int)(a2 - 1);
  v6 = 0LL;
  v8 = a2;
  if ( a2 && v5 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v10 = *(struct DirectComposition::CResourceMarshaler **)(v5 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    if ( !a4 )
      goto LABEL_9;
    v11 = (unsigned int)(a4 - 1);
    if ( v11 < *((_QWORD *)this + 10) )
      v6 = *(struct DirectComposition::CResourceMarshaler **)(v11 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
    if ( !v6 )
      v12 = -1073741811;
    else
LABEL_9:
      v12 = DirectComposition::CApplicationChannel::SetResourceReferenceProperty(this, v10, a3, v6);
  }
  else
  {
    v12 = -1073741790;
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0
    && v12 >= 0
    && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v10 + 96LL))(
         v10,
         127LL)
    && (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
  {
    v14 = *((_DWORD *)v10 + 6);
    v15 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v10 + 8LL))(v10);
    McTemplateK0qqqqq_EtwWriteTransfer(
      v16,
      (unsigned int)&DCompResourcePropertyUpdate,
      v17,
      *((_DWORD *)this + 7),
      v14,
      v8,
      v15,
      a3);
  }
  return (unsigned int)v12;
}
