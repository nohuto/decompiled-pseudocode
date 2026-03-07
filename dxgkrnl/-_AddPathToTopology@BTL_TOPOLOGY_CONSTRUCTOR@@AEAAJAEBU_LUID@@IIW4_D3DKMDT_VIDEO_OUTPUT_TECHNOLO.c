__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
        BTL_TOPOLOGY_CONSTRUCTOR *this,
        struct _LUID *a2,
        int a3,
        int a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a5,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a6,
        char a7,
        char a8,
        char a9)
{
  __int64 result; // rax

  ++*((_WORD *)this + 4);
  result = CCD_TOPOLOGY::AddPathDescriptor(*(_QWORD *)this, (__int64 *)a2, a3, a4, a7, a8, a9, a5, a6, 0, 0LL);
  if ( (_DWORD)result == -1073741789 )
    return 0LL;
  return result;
}
