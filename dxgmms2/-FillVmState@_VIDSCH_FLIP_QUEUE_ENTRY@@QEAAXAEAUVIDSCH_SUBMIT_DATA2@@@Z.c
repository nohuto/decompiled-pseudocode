void __fastcall _VIDSCH_FLIP_QUEUE_ENTRY::FillVmState(_VIDSCH_FLIP_QUEUE_ENTRY *this, struct VIDSCH_SUBMIT_DATA2 *a2)
{
  __int64 v2; // rax
  int v4; // ecx

  v2 = *((_QWORD *)a2 + 70);
  if ( v2 )
  {
    *((_QWORD *)this + 167) = v2;
    *((_DWORD *)this + 336) = *((_DWORD *)a2 + 142);
    *((_QWORD *)this + 169) = *((_QWORD *)a2 + 72);
    *((_QWORD *)this + 170) = *((_QWORD *)a2 + 73);
    *((_QWORD *)this + 171) = *((_QWORD *)a2 + 74);
    v4 = *((_DWORD *)this + 344) ^ (*((_DWORD *)this + 344) ^ (*((_DWORD *)a2 + 1) >> 5)) & 1;
    *((_DWORD *)this + 344) = v4;
    *((_DWORD *)this + 344) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(*((_DWORD *)a2 + 1) >> 3)) & 2;
  }
}
