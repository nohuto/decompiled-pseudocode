/*
 * XREFs of ?SetReferenceArrayProperty@CPrimitiveGroupMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C00120A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@AEAI@Z @ 0x1C00063D4 (-ReleaseResourceMarshalers@CPrimitiveGroupMarshaler@DirectComposition@@AEAAXPEAVCApplicationChan.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD43C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CPrimitiveGroupMarshaler::SetReferenceArrayProperty(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v6; // ebx
  __int64 v10; // rbp
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v14; // rbp
  unsigned int v15; // ebp
  __int64 v16; // rax

  v6 = 0;
  if ( a5 && !a4 )
    v6 = -1073741811;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v14 = 0LL;
      if ( v6 >= 0 )
      {
        while ( (unsigned int)v14 < a5 )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[v14] + 96LL))(
                  a4[v14],
                  126LL) )
            return (unsigned int)-1073741811;
          v14 = (unsigned int)(v14 + 1);
        }
        DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
          (DirectComposition::CPrimitiveGroupMarshaler *)(unsigned int)v14,
          a2,
          *((struct DirectComposition::CResourceMarshaler ***)this + 13),
          (unsigned int *)this + 28);
        if ( *((_DWORD *)this + 29) )
          *((_DWORD *)this + 4) |= 0x80u;
        v15 = 0;
        if ( a5 )
        {
          v16 = 0LL;
          do
          {
            DirectComposition::CResourceMarshaler::AddRef(a4[v16]);
            v16 = ++v15;
          }
          while ( v15 < a5 );
        }
        *((_DWORD *)this + 29) = 0;
        *((_QWORD *)this + 13) = a4;
        *((_DWORD *)this + 28) = a5;
        *a6 = 1;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v10 = 0LL;
    if ( v6 >= 0 )
    {
      while ( (unsigned int)v10 < a5 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[v10] + 96LL))(
                a4[v10],
                40LL) )
          return (unsigned int)-1073741811;
        v10 = (unsigned int)(v10 + 1);
      }
      DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(
        (DirectComposition::CPrimitiveGroupMarshaler *)(unsigned int)v10,
        a2,
        *((struct DirectComposition::CResourceMarshaler ***)this + 11),
        (unsigned int *)this + 24);
      if ( *((_DWORD *)this + 25) )
        *((_DWORD *)this + 4) |= 0x40u;
      v11 = 0;
      if ( a5 )
      {
        v12 = 0LL;
        do
        {
          DirectComposition::CResourceMarshaler::AddRef(a4[v12]);
          v12 = ++v11;
        }
        while ( v11 < a5 );
      }
      *((_DWORD *)this + 25) = 0;
      *((_QWORD *)this + 11) = a4;
      *((_DWORD *)this + 24) = a5;
      *a6 = 1;
    }
  }
  return (unsigned int)v6;
}
