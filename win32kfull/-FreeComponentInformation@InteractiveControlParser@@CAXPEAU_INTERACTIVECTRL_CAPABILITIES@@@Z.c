void __fastcall InteractiveControlParser::FreeComponentInformation(struct _INTERACTIVECTRL_CAPABILITIES *a1)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax

  if ( *((_DWORD *)a1 + 26) )
  {
    v2 = (_QWORD **)((char *)a1 + 112);
    while ( 1 )
    {
      v3 = *v2;
      if ( *v2 == v2 )
        break;
      if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
        __fastfail(3u);
      *v2 = v4;
      v4[1] = v2;
      Win32FreePool(v3);
      --*((_DWORD *)a1 + 26);
    }
  }
  *(_OWORD *)((char *)a1 + 68) = 0LL;
  *(_OWORD *)((char *)a1 + 84) = 0LL;
  *((_DWORD *)a1 + 25) = 0;
}
