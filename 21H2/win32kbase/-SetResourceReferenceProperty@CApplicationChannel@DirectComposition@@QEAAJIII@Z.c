/*
 * XREFs of ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C0085CF8
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C008A134 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler@2@I0@Z @ 0x1C0085DB8 (-SetResourceReferenceProperty@CApplicationChannel@DirectComposition@@QEAAJPEAVCResourceMarshaler.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x1C0150EF0 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceReferenceProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        char a3,
        int a4)
{
  struct DirectComposition::CResourceMarshaler *v6; // r9
  unsigned __int64 v7; // rcx
  char v9; // bp
  __int64 v10; // rax
  struct DirectComposition::CResourceMarshaler *v11; // rsi
  unsigned __int64 v12; // rdx
  int v13; // edi
  char v15; // al
  int v16; // ecx
  int v17; // r8d

  v6 = 0LL;
  v7 = (unsigned int)(a2 - 1);
  v9 = a2;
  if ( a2 && v7 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v10 = *((_QWORD *)this + 7);
    v11 = *(struct DirectComposition::CResourceMarshaler **)(v7 * *((_QWORD *)this + 11) + v10);
    if ( v11 )
    {
      if ( a4
        && ((v12 = (unsigned int)(a4 - 1), v12 >= *((_QWORD *)this + 10))
         || (v6 = *(struct DirectComposition::CResourceMarshaler **)(v12 * *((_QWORD *)this + 11) + v10)) == 0LL) )
      {
        v13 = -1073741811;
      }
      else
      {
        v13 = DirectComposition::CApplicationChannel::SetResourceReferenceProperty(this, v11, a3, v6);
      }
      goto LABEL_8;
    }
  }
  else
  {
    v11 = 0LL;
  }
  v13 = -1073741790;
LABEL_8:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0
    && v13 >= 0
    && (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v11 + 96LL))(
         v11,
         127LL)
    && (Microsoft_Windows_Win32kEnableBits & 0x200000) != 0 )
  {
    v15 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v11 + 8LL))(v11);
    McTemplateK0qqqqq_EtwWriteTransfer(
      v16,
      (unsigned int)&DCompResourcePropertyUpdate,
      v17,
      *((_DWORD *)this + 7),
      *((_DWORD *)v11 + 8),
      v9,
      v15,
      a3);
  }
  return (unsigned int)v13;
}
