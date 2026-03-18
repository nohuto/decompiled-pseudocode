/*
 * XREFs of ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C002D5E0
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002D930 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C0092B30 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::RemoveVisualChild(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v5; // rsi
  struct DirectComposition::CResourceMarshaler *v6; // rax
  __int64 v7; // rbx
  struct DirectComposition::CResourceMarshaler *v8; // rax
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // r9d
  int v12; // eax
  unsigned __int8 IsDerivedResourceType; // al
  char v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = 0;
  v5 = 0LL;
  v6 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a2);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v6 + 168LL))(v6);
    if ( v7
      && (!a3
       || (v8 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(this, a3)) != 0LL
       && (v5 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v8 + 168LL))(v8)) != 0) )
    {
      v9 = *(_QWORD *)v7;
      if ( v5 )
        v10 = (*(__int64 (__fastcall **)(__int64, DirectComposition::CApplicationChannel *, __int64, char *))(v9 + 296))(
                v7,
                this,
                v5,
                &v15);
      else
        v10 = (*(__int64 (__fastcall **)(__int64, DirectComposition::CApplicationChannel *, char *))(v9 + 304))(
                v7,
                this,
                &v15);
      v11 = v10;
      if ( v10 >= 0 )
      {
        if ( v15 )
        {
          v12 = *(_DWORD *)(v7 + 16);
          if ( (v12 & 2) == 0 )
          {
            if ( (v12 & 1) != 0 )
            {
              IsDerivedResourceType = DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                                        *(unsigned int *)(v7 + 36),
                                        170LL);
              *(_QWORD *)(v7 + 8) = *((_QWORD *)this + IsDerivedResourceType + 52);
              *((_QWORD *)this + IsDerivedResourceType + 52) = v7;
            }
            *(_DWORD *)(v7 + 16) |= 2u;
            *((_BYTE *)this + 240) |= 1u;
          }
        }
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v11;
}
