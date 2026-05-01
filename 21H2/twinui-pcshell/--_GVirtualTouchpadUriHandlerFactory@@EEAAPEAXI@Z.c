/*
 * XREFs of ??_GVirtualTouchpadUriHandlerFactory@@EEAAPEAXI@Z @ 0x1803995F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800906D4 (--3@YAXPEAX@Z.c)
 *     ??1VirtualTouchpadUriHandlerFactory@@EEAA@XZ @ 0x18039951C (--1VirtualTouchpadUriHandlerFactory@@EEAA@XZ.c)
 */

VirtualTouchpadUriHandlerFactory *__fastcall VirtualTouchpadUriHandlerFactory::`scalar deleting destructor'(
        VirtualTouchpadUriHandlerFactory *this,
        char a2)
{
  VirtualTouchpadUriHandlerFactory::~VirtualTouchpadUriHandlerFactory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
