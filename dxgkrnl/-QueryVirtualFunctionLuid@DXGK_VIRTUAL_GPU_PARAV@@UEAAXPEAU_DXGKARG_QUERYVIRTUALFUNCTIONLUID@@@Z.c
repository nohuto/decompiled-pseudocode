void __fastcall DXGK_VIRTUAL_GPU_PARAV::QueryVirtualFunctionLuid(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_QUERYVIRTUALFUNCTIONLUID *a2)
{
  *a2->pLuid = *(struct _LUID *)((char *)this + 28);
}
