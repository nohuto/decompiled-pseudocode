/*
 * XREFs of ?EnsureSize@CChannel@@AEAAJI@Z @ 0x180043C0C
 * Callers:
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180043B74 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 * Callees:
 *     ?EnsureItem@CDataStreamWriter@@QEAAJI@Z @ 0x180044590 (-EnsureItem@CDataStreamWriter@@QEAAJI@Z.c)
 *     ?Recycle@CDataStreamWriter@@QEAAXXZ @ 0x1800446C0 (-Recycle@CDataStreamWriter@@QEAAXXZ.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180044740 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CChannel::EnsureSize(CChannel *this, unsigned int a2)
{
  struct CCommandBatch **v2; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  PSLIST_ENTRY v7; // rax
  unsigned int v8; // ecx
  struct CCommandBatch *v9; // r8
  int v10; // eax
  unsigned int v11; // edi
  int v12; // [rsp+20h] [rbp-8h]
  int v13; // [rsp+20h] [rbp-8h]
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct CCommandBatch **)((char *)this + 176);
  if ( !*((_QWORD *)this + 22) )
  {
    v7 = InterlockedPopEntrySList((PSLIST_HEADER)(*((_QWORD *)this + 7) + 160LL));
    if ( v7 )
    {
      CDataStreamWriter::Recycle((CDataStreamWriter *)&v7[-4]);
      *v2 = v9;
    }
    else
    {
      v10 = CCommandBatch::Create(v8, v2);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x46,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
          (const char *)(unsigned int)v10,
          v12);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x117,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
          (const char *)v11,
          v13);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFF,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
          (const char *)v11,
          v14);
        return v11;
      }
    }
  }
  v4 = CDataStreamWriter::EnsureItem(*v2, a2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x105,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)(unsigned int)v4,
    v12);
  return v5;
}
