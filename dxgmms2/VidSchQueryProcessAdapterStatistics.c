__int64 __fastcall VidSchQueryProcessAdapterStatistics(unsigned int *a1, __int64 a2, _DWORD *a3)
{
  _QWORD *v3; // r9
  __int64 v5; // r10
  __int64 v6; // r8
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  __int64 v9; // r9
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  _QWORD *v12; // rax

  v3 = a3 + 48;
  a3[1] = a1[20];
  a3[2] = a1[10];
  v5 = a2 - (_QWORD)a3;
  v6 = 9LL;
  do
  {
    *v3 = *(_QWORD *)((char *)v3 + v5 + 2488);
    ++v3;
    --v6;
  }
  while ( v6 );
  RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(*(DXGPROCESS **)(a2 + 8), a1[1]);
  if ( !RenderAdapterInfo )
    return 3221225485LL;
  v9 = -1LL;
  v10 = (_QWORD *)((char *)RenderAdapterInfo + 136);
  a3[66] = 0;
  v11 = (_QWORD *)*((_QWORD *)RenderAdapterInfo + 17);
  while ( v11 != v10 )
  {
    v12 = v11;
    v11 = (_QWORD *)*v11;
    if ( v12[3] > v9 )
    {
      v9 = v12[3];
      a3[66] = *((_DWORD *)v12 + 4);
    }
  }
  return 0LL;
}
