void __fastcall DXGGLOBAL::DelayDestroyAdapterWork(_QWORD *P)
{
  struct DXGGLOBAL *Global; // rbx
  _QWORD *v3; // rcx
  PVOID *v4; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGFASTMUTEX::Acquire((struct DXGGLOBAL *)((char *)Global + 672));
  DXGFASTMUTEX::Acquire((struct DXGGLOBAL *)((char *)Global + 720));
  v3 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v4 = (PVOID *)P[1], *v4 != P) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage((DXGGLOBAL *)v3, (struct DXGADAPTER *)P) )
  {
    --*((_DWORD *)Global + 76206);
    if ( *((_BYTE *)P + 2764) )
    {
      --*((_DWORD *)Global + 76202);
    }
    else if ( *((_BYTE *)P + 2759) )
    {
      --*((_DWORD *)Global + 76203);
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)Global + 90);
  DXGFASTMUTEX::Release((struct _KTHREAD **)Global + 84);
  DXGADAPTER::`scalar deleting destructor'((DXGADAPTER *)P);
}
